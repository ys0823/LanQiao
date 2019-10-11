/*
问题描述
　　给定两个仅由大写字母或小写字母组成的字符串(长度介于1到10之间)，它们之间的关系是以下4中情况之一：
　　1：两个字符串长度不等。比如 Beijing 和 Hebei
　　2：两个字符串不仅长度相等，而且相应位置上的字符完全一致(区分大小写)，比如 Beijing 和 Beijing
　　3：两个字符串长度相等，相应位置上的字符仅在不区分大小写的前提下才能达到完全一致（也就是说，它并不满足情况2）。比如 beijing 和 BEIjing
　　4：两个字符串长度相等，但是即使是不区分大小写也不能使这两个字符串一致。比如 Beijing 和 Nanjing
　　编程判断输入的两个字符串之间的关系属于这四类中的哪一类，给出所属的类的编号。
输入格式
　　包括两行，每行都是一个字符串
输出格式
　　仅有一个数字，表明这两个字符串的关系编号
样例输入
BEIjing
beiJing 
样例输出
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
