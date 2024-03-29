/*
问题描述
杨辉三角形又称Pascal三角形，它的第i+1行是(a+b)i的展开式的系数。

　　
它的一个重要性质是：三角形中的每个数字等于它两肩上的数字相加。

　　
下面给出了杨辉三角形的前4行：

　　
   1

　　
  1 1

　　
 1 2 1

　　
1 3 3 1

　　
给出n，输出它的前n行。

输入格式
输入包含一个数n。

输出格式
输出杨辉三角形的前n行。每一行从这一行的第一个数开始依次输出，中间使用一个空格分隔。请不要在前面输出多余的空格。
样例输入
4
样例输出
1
1 1
1 2 1
1 3 3 1
数据规模与约定
1 <= n <= 34。
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
#define N 34
int main() {
	int n;
	cin >> n;
	int a[N][N] ={0};
	a[0][0] = 1;
	for (int i = 1;i < n;i++) {
		//a[i][0] = 1;
		//a[i][n - 1] = 1;
		//a[i][0] =1;
		//a[i][i] =1;
		for (int j = 0;j <= i;j++) {
			//a[i][0] =1;
			//a[i][i] =1;
			if(j ==0)
				a[i][j] =1;
			else if(j==i)
				a[i][j] =1;	
			else		
				a[i][j] = a[i-1][j] + a[i-1][j-1];
		}
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j <= i;j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
	system("pause");
}
