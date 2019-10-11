/*
问题描述
　　求出区间[a,b]中所有整数的质因数分解。
输入格式
　　输入两个整数a，b。
输出格式
　　每行输出一个数的分解，形如k=a1*a2*a3...(a1<=a2<=a3...，k也是从小到大的)(具体可看样例)
样例输入
3 10
样例输出
3=3
4=2*2
5=5
6=2*3
7=7
8=2*2*2
9=3*3
10=2*5
提示
　　先筛出所有素数，然后再分解。
数据规模和约定
　　2<=a<=b<=10000
*/ 

#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

//判断[a,b]间的素数并输出 
bool prime_number(int n){
	bool flag=true;
	//int *temp =new int[n];
	for(int i=2;i<=(int)sqrt((double)n);i++){
		if(n%i ==0){
			flag = false;
			break;
		}	
	}
	return flag;
}

int main(){
	vector<int> v;
	int a,b,m;
	cin>>a>>b;
	
	//将2~b间的素数全部存储下来 
	for(int i=2;i<=b;i++){
		if(prime_number(i)){
			v.push_back(i);
		}
	}
	
	for(int i=a;i<=b;i++){
		m =i;
		if(prime_number(m)){
			cout<<m<<"="<<m;
		}
		else{
			int index = 0;
			cout<<m<<"="; 
			while(m/v[index] >= 1){ //当还有因数时 
				if(m%v[index]==0){
					m=m/v[index];
					cout<<v[index];
					index = 0; 
					
					if(m!=1)
						cout<<"*"; 
				}
				else if(m%v[index]!=0){
					index += 1;
				}
			}
		}
		cout<<endl;	
	}  
	return 0;
	
}
