/*
问题描述
　　给定一个长度为n的数列，将这个数列按从小到大的顺序排列。1<=n<=200
输入格式
　　第一行为一个整数n。
　　第二行包含n个整数，为待排序的数，每个整数的绝对值小于10000。
输出格式
　　输出一行，按从小到大的顺序输出排序后的数列。
样例输入
5
8 3 6 4 9
样例输出
3 4 6 8 9
*/ 

#include<iostream>
#include<algorithm>
#include<stdlib.h>
#define N 200
using namespace std;
int main(){
	int n,temp,i,j;
	cin>>n;
	int a[N];
	for(int i=0;i<n;i++)
		cin>>a[i]; 
	
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[j]<a[i]){   //z注意c++中循环一句可以不用{},但是多句需要用{} ,否则程序或出错 
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}	
	//sort(a,a+n);
	for(i=0;i<n;i++)
		cout<<a[i]<<" "; 		
	return 0; 
}
