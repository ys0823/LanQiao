/*
��������
����n�������ҳ���n���������ֵ����Сֵ���͡�

�����ʽ
��һ��Ϊ����n����ʾ���ĸ�����

�ڶ�����n������Ϊ������n������ÿ�����ľ���ֵ��С��10000��

�����ʽ
������У�ÿ��һ����������һ�б�ʾ��Щ���е����ֵ���ڶ��б�ʾ��Щ���е���Сֵ�������б�ʾ��Щ���ĺ͡�
��������
5
1 3 -2 4 5
�������
5
-2
11
���ݹ�ģ��Լ��
1 <= n <= 10000��
*/ 

#include<iostream>
#define N 10000
using namespace std;
int main(){
	int n;
	int a[N];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min=a[0],max=a[0];
	long long sum = 0;
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min = a[i];
		}
		if(a[i]>max){
			max = a[i];
		}
		sum = sum+a[i];

	}
	cout<<max<<"\n";
	cout<<min<<"\n";
	cout<<sum<<"\n";
	return 0; 
}
