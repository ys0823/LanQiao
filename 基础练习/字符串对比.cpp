/*
��������
���������������ɴ�д��ĸ��Сд��ĸ��ɵ��ַ���(���Ƚ���1��10֮��)������֮��Ĺ�ϵ������4�����֮һ��
����1�������ַ������Ȳ��ȡ����� Beijing �� Hebei
����2�������ַ�������������ȣ�������Ӧλ���ϵ��ַ���ȫһ��(���ִ�Сд)������ Beijing �� Beijing
����3�������ַ���������ȣ���Ӧλ���ϵ��ַ����ڲ����ִ�Сд��ǰ���²��ܴﵽ��ȫһ�£�Ҳ����˵���������������2�������� beijing �� BEIjing
����4�������ַ���������ȣ����Ǽ�ʹ�ǲ����ִ�СдҲ����ʹ�������ַ���һ�¡����� Beijing �� Nanjing
��������ж�����������ַ���֮��Ĺ�ϵ�����������е���һ�࣬������������ı�š�
�����ʽ
�����������У�ÿ�ж���һ���ַ���
�����ʽ
��������һ�����֣������������ַ����Ĺ�ϵ���
��������
BEIjing
beiJing 
�������
3
*/ 

#include<iostream>
#include<string>
using namespace std;
int Judge_category(string s1,string s2 );
int main(){
	string *s;
	int n,number;
	s = new string[2];
	for (int i = 0;i < 2;i++) {
		cin>>s[i];
	}
	number = Judge_category(s[0],s[1]);
	cout<< number;	
	return 0;
}
int Judge_category(string s1,string s2 ){
	int flag1=0,flag2=0,flag3=0,flag4 = 0;
	int len_s1 = s1.length();
	int len_s2 = s2.length();
	if(len_s1 != len_s2){
		flag1 = 1;
		return flag1;
	}
	else{
		for(int i=1;i<len_s1;i++){
			if((s1[i] !=s2[i])  && ((s1[i]+32) !=s2[i] ) && ((s1[i]-32)!=s2[i])){
				flag4 = 4;
			}
			else if(s1[i] == s2[i]){
				flag2 = 2;
			}
			else if(s1[i] != s2[i] && (s1[i]+32 ==s2[i] || s1[i]-32 ==s2[i])){
				flag3 = 3;
			}
		}
		if(flag4==4 ){
			return 4;
		}
		if(flag2 ==2 && flag3==0 && flag4==0){
			return 2;
		}
		if(flag3==3 && flag4 ==0){
			return 3;
		}
	}

}
