/*
问题描述
　　平面上有两个矩形，它们的边平行于直角坐标系的X轴或Y轴。对于每个矩形，我们给出它的一对相对顶点的坐标，请你编程算出两个矩形的交的面积。
输入格式
　　输入仅包含两行，每行描述一个矩形。
　　在每行中，给出矩形的一对相对顶点的坐标，每个点的坐标都用两个绝对值不超过10^7的实数表示。
输出格式
　　输出仅包含一个实数，为交的面积，保留到小数后两位。
样例输入
1 1 3 3
2 2 4 4
样例输出
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
