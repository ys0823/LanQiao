/*
��������
����һ������n�����������У�������a�������еĵ�һ�γ����ǵڼ�����

�����ʽ
��һ�а���һ������n��

�ڶ��а���n���Ǹ�������Ϊ���������У������е�ÿ������������10000��

�����а���һ������a��Ϊ�����ҵ�����

�����ʽ
���a�������г����ˣ��������һ�γ��ֵ�λ��(λ�ô�1��ʼ���)���������-1��
��������
6
1 9 4 8 3 9
9
�������
2
���ݹ�ģ��Լ��
1 <= n <= 1000��
*/ 

#include<iostream>
#define N 1000
using namespace std;
int search(int n,int a[],int m){
	int flag=0,i;
	for(i=0;i<n;i++){
		if(a[i] == m){
			flag =1;
			break;
		}
	}
	if(flag ==1)
		return (i+1);
	else 
		return -1;
}

int main(){
	int n,m;
	cin>>n; 
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	cout<<search(n,a,m)<<endl;
	return 0;return 0;
}
