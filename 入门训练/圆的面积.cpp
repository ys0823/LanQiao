/*
��������
����Բ�İ뾶r����Բ�������
�����ʽ
�������һ������r����ʾԲ�İ뾶��
�����ʽ
���һ�У�����һ��ʵ�����������뱣��С�����7λ����ʾԲ�������
˵�����ڱ����У�������һ�����������������һ��ʵ����

����ʵ����������⣬��һ�������ʵ�������Ҫ�󣬱��籾����Ҫ����С�����7λ������ĳ�������ϸ�����7λС�������������߹��ٵ�С��λ�����ǲ��еģ����ᱻ��Ϊ����

ʵ��������������û���ر�˵�������붼�ǰ�����������С�

��������
4
�������
50.2654825
���ݹ�ģ��Լ��
1 <= r <= 10000��
��ʾ
����Ծ���Ҫ��ϸߣ���ע��е�ֵӦ��ȡ�Ͼ�ȷ��ֵ�������ʹ�ó�������ʾ�У�����PI=3.14159265358979323��Ҳ����ʹ����ѧ��ʽ����У�����PI=atan(1.0)*4��
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
