/*
��������
Fibonacci���еĵ��ƹ�ʽΪ��Fn=Fn-1+Fn-2������F1=F2=1��

��n�Ƚϴ�ʱ��FnҲ�ǳ�������������֪����Fn����10007�������Ƕ��١�

�����ʽ
�������һ������n��
�����ʽ
���һ�У�����һ����������ʾFn����10007��������
˵�����ڱ����У�����Ҫ��Fn����10007���������������ֻҪ���������������ɣ�������Ҫ�ȼ����Fn��׼ȷֵ���ٽ�����Ľ������10007ȡ������ֱ�Ӽ������������������ԭ����ȡ��򵥡�

��������
10
�������
55
��������
22
�������
7704
���ݹ�ģ��Լ��
1 <= n <= 1,000,000��
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
						c += a[i][k]*b[k][j];//�ߴ�����˷���ʽ  
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
