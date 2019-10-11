/*
问题描述
　　1221是一个非常特殊的数，它从左边读和从右边读是一样的，编程求所有这样的四位十进制数。
输出格式
　　按从小到大的顺序输出满足条件的四位十进制数。
*/ 

#include<iostream>
using namespace std;
int main(){
	int i,a,b,c,d;
	for(i=1000;i<10000;i++){
		a = i/1000;
		b = i%1000/100;
		c = i%1000%100/10;
		d = i%1000%100%10; 
		if(a ==d && b==c){
			cout<<i<<endl; 
		}
	}
	
} 
