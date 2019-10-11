/*
问题描述
给定圆的半径r，求圆的面积。
输入格式
输入包含一个整数r，表示圆的半径。
输出格式
输出一行，包含一个实数，四舍五入保留小数点后7位，表示圆的面积。
说明：在本题中，输入是一个整数，但是输出是一个实数。

对于实数输出的问题，请一定看清楚实数输出的要求，比如本题中要求保留小数点后7位，则你的程序必须严格的输出7位小数，输出过多或者过少的小数位数都是不行的，都会被认为错误。

实数输出的问题如果没有特别说明，舍入都是按四舍五入进行。

样例输入
4
样例输出
50.2654825
数据规模与约定
1 <= r <= 10000。
提示
本题对精度要求较高，请注意π的值应该取较精确的值。你可以使用常量来表示π，比如PI=3.14159265358979323，也可以使用数学公式来求π，比如PI=atan(1.0)*4。
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

	//坐标全部转换成左下角和右上角的形式 
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

	if (x1 <= x2) {   //此时分三种情况
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
