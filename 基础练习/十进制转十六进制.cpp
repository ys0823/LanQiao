/*
问题描述
　　十六进制数是在程序设计时经常要使用到的一种整数的表示方式。它有0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F共16个符号，分别表示十进制数的0至15。十六进制的计数方法是满16进1，所以十进制数16在十六进制中是10，而十进制的17在十六进制中是11，以此类推，十进制的30在十六进制中是1E。
　　给出一个非负整数，将它表示成十六进制的形式。
输入格式
　　输入包含一个非负整数a，表示要转换的数。0<=a<=2147483647
输出格式
　　输出这个整数的16进制表示
样例输入
30
样例输出
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
	m = NULL; //防止内存越界
	delete[] m;
	//m = NULL;
	return 0;
}
