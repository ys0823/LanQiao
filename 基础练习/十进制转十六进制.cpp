/*
��������
����ʮ�����������ڳ������ʱ����Ҫʹ�õ���һ�������ı�ʾ��ʽ������0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F��16�����ţ��ֱ��ʾʮ��������0��15��ʮ�����Ƶļ�����������16��1������ʮ������16��ʮ����������10����ʮ���Ƶ�17��ʮ����������11���Դ����ƣ�ʮ���Ƶ�30��ʮ����������1E��
��������һ���Ǹ�������������ʾ��ʮ�����Ƶ���ʽ��
�����ʽ
�����������һ���Ǹ�����a����ʾҪת��������0<=a<=2147483647
�����ʽ
����������������16���Ʊ�ʾ
��������
30
�������
1E
*/ 

#include<iostream>
using namespace std;
char dig_char(int a) {
	char b;
	if (a < 10) {
		b = a+48;
		return b;
	}
	else if (a >= 10) {
		b = a - 10 + 'A';
		return b;
	}
}

int main() {
	long long a,rem;
	cin >> a;
	int *m;
	int len ;
	//int m[10000];
	m = new int[100];
	char ch;
	len = 0;
	if (a == 0) {
		m[0] = a;
		len = len + 1;
	}
	else {
		while (a > 0) {
			rem = a % 16;
			a = a / 16;
			m[len++] = rem;
		}
	}
	for (int i = len - 1;i >= 0;i--) {
		ch = dig_char(m[i]);
		cout << ch;
	}
	delete m;
	m = NULL; //��ֹ�ڴ�Խ��
	delete[] m;
	//m = NULL;
	return 0;
}
