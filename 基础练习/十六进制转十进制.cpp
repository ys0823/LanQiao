/*
问题描述
　　从键盘输入一个不超过8位的正的十六进制数字符串，将它转换为正的十进制数后输出。
　　注：十六进制数中的10~15分别用大写的英文字母A、B、C、D、E、F表示。
样例输入
FFFF
样例输出
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
