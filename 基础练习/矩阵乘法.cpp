/*
��������
��������һ��N�׾���A�����A��M���ݣ�M�ǷǸ�������
�������磺
����A =
����1 2
����3 4
����A��2����
����7 10
����15 22
�����ʽ
������һ����һ��������N��M��1<=N<=30, 0<=M<=5������ʾ����A�Ľ�����Ҫ�������
����������N�У�ÿ��N������ֵ������10�ķǸ���������������A��ֵ
�����ʽ
���������N�У�ÿ��N����������ʾA��M��������Ӧ�ľ������ڵ���֮����һ���ո����
��������
2 2
1 2
3 4
�������
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
