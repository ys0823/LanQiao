/*
��������
����ƽ�������������Σ����ǵı�ƽ����ֱ������ϵ��X���Y�ᡣ����ÿ�����Σ����Ǹ�������һ����Զ�������꣬����������������εĽ��������
�����ʽ
����������������У�ÿ������һ�����Ρ�
������ÿ���У��������ε�һ����Զ�������꣬ÿ��������궼����������ֵ������10^7��ʵ����ʾ��
�����ʽ
�������������һ��ʵ����Ϊ���������������С������λ��
��������
1 1 3 3
2 2 4 4
�������
1.00
*/ 

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	double x1, x2, x3, x4, y1, y2, y3, y4, temp = 0;
	double a, b, wide, height;
	double s;
	cin >> x1 >> y1 >> x3 >> y3;
	cin >> x2 >> y2 >> x4 >> y4;

	//����ȫ��ת�������½Ǻ����Ͻǵ���ʽ 
	if (x1 > x3 && y1 < y3) {
		temp = x3;
		x3 = x1;
		x1 = temp;

	}
	else if (x1 < x3 && y1>y3) {
		temp = y3;
		y3 = y1;
		y1 = temp;
	}
	else if (x1 > x3 && y1 > y3) {
		temp = x3;
		x3 = x1;
		x1 = temp;
		temp = y3;
		y3 = y1;
		y1 = temp;
	}
	if (x2 > x4 && y2 < y4) {
		temp = x2;
		x2 = x4;
		x4 = temp;
	}
	else if (x2<x4 && y2>y4) {
		temp = y4;
		y4 = y2;
		y2 = temp;
	}
	else if (x2 > x4 && y2 > y4) {
		temp = x2;
		x2 = x4;
		x4 = temp;

		temp = y4;
		y4 = y2;
		y2 = temp;
	}

	if (x1 <= x2) {   //��ʱ���������
		a = fabs(x1 - x3);
		b = fabs(y1 - y3);

		if (x3 < x4) {
			wide = a - fabs(x2 - x1);
			height = b - fabs(y3 - y4);
			if (wide >= 0) {
				s = wide * height;
				cout << setiosflags(ios::fixed) << setprecision(2) << s << endl;
			}
			else if (wide < 0) {
				s = 0.00;
				cout << setiosflags(ios::fixed) << setprecision(2) << s << endl;
			}
		}
		else {
			s = (x2 - x4)*(y2 - y4);
			cout << setiosflags(ios::fixed) << setprecision(2) << s << endl;
		}
	}

	else if (x1 > x2) {
		a = fabs(x2 - x4);
		b = fabs(y2 - y4);

		if (x4 < x3) {
			wide = a - fabs(x2 - x1);
			height = b - fabs(y3 - y4);
			if (wide >= 0) {
				s = wide * height;
				cout << setiosflags(ios::fixed) << setprecision(2) << s << endl;
			}
			else {
				s = 0.00;
				cout << setiosflags(ios::fixed) << setprecision(2) << s << endl;
			}
		}
		else {
			s = (x1 - x3)*(y1 - y3);
			cout << setiosflags(ios::fixed) << setprecision(2) << s << endl;
		}
	}
	else
		return 0;
}
