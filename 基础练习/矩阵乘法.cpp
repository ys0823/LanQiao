/*
问题描述
　　给定一个N阶矩阵A，输出A的M次幂（M是非负整数）
　　例如：
　　A =
　　1 2
　　3 4
　　A的2次幂
　　7 10
　　15 22
输入格式
　　第一行是一个正整数N、M（1<=N<=30, 0<=M<=5），表示矩阵A的阶数和要求的幂数
　　接下来N行，每行N个绝对值不超过10的非负整数，描述矩阵A的值
输出格式
　　输出共N行，每行N个整数，表示A的M次幂所对应的矩阵。相邻的数之间用一个空格隔开
样例输入
2 2
1 2
3 4
样例输出
7 10
15 22
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
