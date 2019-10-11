/*
问题描述
Fibonacci数列的递推公式为：Fn=Fn-1+Fn-2，其中F1=F2=1。

当n比较大时，Fn也非常大，现在我们想知道，Fn除以10007的余数是多少。

输入格式
输入包含一个整数n。
输出格式
输出一行，包含一个整数，表示Fn除以10007的余数。
说明：在本题中，答案是要求Fn除以10007的余数，因此我们只要能算出这个余数即可，而不需要先计算出Fn的准确值，再将计算的结果除以10007取余数，直接计算余数往往比先算出原数再取余简单。

样例输入
10
样例输出
55
样例输入
22
样例输出
7704
数据规模与约定
1 <= n <= 1,000,000。
*/ 

#include<iostream>
using namespace std;
int main(){
	int N,M;
	cin>>N>>M;
	int a[30][30];
	int b[30][30];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	
	if(M==0){
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				if(i!=j) cout<<0<<" ";
				else cout<<1<<" ";
			}
			cout<<endl; 
		}
	}
	
	else if(M==1){
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cout<<a[i][j]<<" "; 
			}
			cout<<endl;
		} 	
	}
	
	else{
		for(int z=1;z<M;z++){
			int temp[30][30];
			/*
			int **temp= new int *[30];
			for(int i=0;i<30;i++){
				temp[i] = new int[30];}*/	
			for(int i=0;i<N;i++){
				for(int j=0;j<N;j++){
					long c = 0;
					for(int k=0;k<N;k++){
						c += a[i][k]*b[k][j];//线代矩阵乘法公式  
					}
					temp[i][j] = c;
				}
			}
			
			for(int i=0;i<N;i++){
				for(int j=0;j<N;j++){
					b[i][j] = temp[i][j];
				}
			}
			
			//delete[] temp;
		}
		
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cout<<b[i][j]<<" "; }
			cout<<endl;
		}
	}	
	return 0;
}
