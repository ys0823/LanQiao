/*
��������
��������һ������Ϊn�����У���������а���С�����˳�����С�1<=n<=200
�����ʽ
������һ��Ϊһ������n��
�����ڶ��а���n��������Ϊ�����������ÿ�������ľ���ֵС��10000��
�����ʽ
�������һ�У�����С�����˳��������������С�
��������
5
8 3 6 4 9
�������
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
			if(a[j]<a[i]){   //zע��c++��ѭ��һ����Բ���{},���Ƕ����Ҫ��{} ,����������� 
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}	
	//sort(a,a+n);
	for(i=0;i<n;i++)
		cout<<a[i]<<" "; 		
	return 0; 
}
