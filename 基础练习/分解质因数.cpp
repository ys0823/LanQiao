/*
��������
�����������[a,b]�������������������ֽ⡣
�����ʽ
����������������a��b��
�����ʽ
����ÿ�����һ�����ķֽ⣬����k=a1*a2*a3...(a1<=a2<=a3...��kҲ�Ǵ�С�����)(����ɿ�����)
��������
3 10
�������
3=3
4=2*2
5=5
6=2*3
7=7
8=2*2*2
9=3*3
10=2*5
��ʾ
������ɸ������������Ȼ���ٷֽ⡣
���ݹ�ģ��Լ��
����2<=a<=b<=10000
*/ 

#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

//�ж�[a,b]������������ 
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
	
	//��2~b�������ȫ���洢���� 
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
			while(m/v[index] >= 1){ //����������ʱ 
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
