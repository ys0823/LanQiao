/*
��������
������ĸ�������һЩ������ͼ�Σ����������һ�����ӣ�

ABCDEFG

BABCDEF

CBABCDE

DCBABCD

EDCBABC

����һ��5��7�е�ͼ�Σ����ҳ����ͼ�εĹ��ɣ������һ��n��m�е�ͼ�Ρ�

�����ʽ
����һ�У�������������n��m���ֱ��ʾ��Ҫ�����ͼ�ε�������������
�����ʽ
���n�У�ÿ��m���ַ���Ϊ���ͼ�Ρ�
��������
5 7
�������
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
���ݹ�ģ��Լ��
1 <= n, m <= 26��
*/ 

#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m; 
	char a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==j){
				a[i][j] ='A';
			}
			else if(i<=j){
				a[i][j] = 'A'-i+j;
			}
			else if(i>j){
				a[i][j] = 'A'+i-j;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]; 
		}
		cout<<"\n"; 
	}
	return 0;	
}
