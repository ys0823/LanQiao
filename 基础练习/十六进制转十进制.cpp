/*
��������
�����Ӽ�������һ��������8λ������ʮ���������ַ���������ת��Ϊ����ʮ�������������
����ע��ʮ���������е�10~15�ֱ��ô�д��Ӣ����ĸA��B��C��D��E��F��ʾ��
��������
FFFF
�������
65535
*/ 

#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
	string s;
	int i=0,b,len;
	long long sum=0; 
	getline(cin,s);
	len = s.length();
	for(int i=len-1;i>=0;i--){
		if(s[i]>='A'&&s[i]<='Z'){
			sum +=pow(16,len -i-1) * (s[i]-'A'+10);}
		else if(s[i]>='0'&& s[i]<='9'){
			sum += pow(16,len-i-1) *(s[i]-48);} 
		}	
	cout<<sum;
	return 0;
}
