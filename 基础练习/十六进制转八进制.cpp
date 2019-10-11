/*
��������
��������n��ʮ��������������������Ƕ�Ӧ�İ˽�������

�����ʽ
��������ĵ�һ��Ϊһ��������n ��1<=n<=10����
����������n�У�ÿ��һ����0~9����д��ĸA~F��ɵ��ַ�������ʾҪת����ʮ��������������ÿ��ʮ�����������Ȳ�����100000��

�����ʽ
�������n�У�ÿ��Ϊ�����Ӧ�İ˽�����������

������ע�⡿
���������ʮ��������������ǰ��0������012A��
��������İ˽�����Ҳ������ǰ��0��

��������
����2
����39
����123ABC

�������
����71
����4435274

��������ʾ��
�����Ƚ�ʮ��������ת����ĳ������������ĳ������ת���ɰ˽��ơ�
*/ 

#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
�㷨���ͣ�
        �����ַ�����ʽ���մ�ת����ʮ�����������ö�Ӧ��������ת��Ϊ���������������ַ����У�������ѧ���������Ӧ�Ķ�����ת��Ϊ�˽���ֵ�������Ϊvector<int>���Ͳ���ӡ��
��������Ľ��������
        1. ʮ������ת�����ƣ�1��ʮ������λ��Ӧ4��������λ,��3��������λ����Ӧ1���˽���λ�����ܳ��ֶ�����תΪ�˽���ʱ��λ������ȷ���´�����A12Ϊ1010 0001
        תΪ�˽���ʱ�� 10 100 001 ,ǰ��ֻ��������������10��������˽�����ƥ�䡣
         - solution: �жϴ洢�����Ƶ�vector���ȣ�flag = 3 - Bin.length()%3; flag��Ϊ������vectorӦ����ǰ�����0�ĸ��� 
        2. ��ĿҪ��˽�����λ�������0����39ת�����Ϊ071��
         - solution: �����㷨,���ǽ��������Ĺ�����,���������ʱ�����ǽ�Ϊ�򵥵ķ������������ʱ���˽�����λ�Ƿ�Ϊ0��Ϊ0�������
*/
int main()
{
    string HexToBin(string Hex);
    vector<int> BinToOct(string Bin);
    int cnt;
    cin >> cnt;
    string *Hex = new string[cnt];
    for(int i = 0;i < cnt;i++)
    {
        cin >> Hex[i];
    }
    for(int i = 0;i < cnt;i++)
    {
        vector<int>::iterator it;
        vector<int> result = BinToOct(HexToBin(Hex[i]));
        for(it = result.begin();it!=result.end();it++)
        {
            if(it==result.begin() && *it == 0)
                continue;
            cout<<*it;
        }
        if( i != cnt - 1)
            cout<<endl;
    }
    return 0;
}

string HexToBin(string Hex)
{
    string Bin;
    for(int i = 0;i < Hex.length();i++)
    {
        switch(Hex[i])
        {
            case '0' : Bin.append("0000"); break;
            case '1' : Bin.append("0001"); break;
            case '2' : Bin.append("0010"); break;
            case '3' : Bin.append("0011"); break;
            case '4' : Bin.append("0100"); break;
            case '5' : Bin.append("0101"); break;
            case '6' : Bin.append("0110"); break;
            case '7' : Bin.append("0111"); break;
            case '8' : Bin.append("1000"); break;
            case '9' : Bin.append("1001"); break;
            case 'A' : Bin.append("1010"); break;
            case 'B' : Bin.append("1011"); break;
            case 'C' : Bin.append("1100"); break;
            case 'D' : Bin.append("1101"); break;
            case 'E' : Bin.append("1110"); break;
            case 'F' : Bin.append("1111"); break;
        }
    }
    return Bin;
}

vector<int> BinToOct(string Bin)
{
    int flag = 3 - Bin.length()%3; //
    if(1 == flag)
        Bin.insert(0,"0");
    if(2 == flag)
        Bin.insert(0,"00");

    vector<int> Oct;
    int cnt = 0;
    while(cnt != Bin.length())
    {
        int result;
        result = 4*(Bin[cnt++]- '0') + 2*(Bin[cnt++]- '0') + (Bin[cnt++]- '0');
        Oct.push_back(result);
    }
    return Oct;
}
/*
#include<iostream>
#include<string>
#include<cstdio> 
#include<math.h>
using namespace std;
void sixteen_eight(string str, int len);

int main() {
	string *s;
	int n;
	//int i,len,rem,length_array,n;
	//long long sum=0; 
	//int m[100000];
	cin >> n;
	s = new string[n];
	for (int i = 0;i < n;i++) {
		//getline(cin,s[i]);
		cin>>s[i];
		//cout<<s[i]<<endl;
	}
	
	for (int i = 0;i < n;i++) {
		sixteen_eight(s[i], s[i].size());
	}
	return 0;
}

void sixteen_eight(string s, int len) {

	//len = s.length();
	//ʮ������תʮ���� 
	long long sum=0;
	long long m[10000];
	long rem, length_array=0;

	for (int i = len - 1;i >= 0;i--) {
		if (s[i] >= 'A'&&s[i] <= 'Z') {
			sum += pow(16, len - i - 1) * (s[i] - 'A' + 10);
		}
		else if (s[i] >= '0'&& s[i] <= '9') {
			sum += pow(16, len - i - 1) *(s[i] - 48);
		}
	}

	//ʮ����ת�˽���
	if (sum == 0) {
		m[0] = sum;
		length_array += 1;
	}
	else {
		while (sum > 0) {
			rem = sum % 8;
			sum = sum / 8;
			m[length_array++] = rem;
		}
	}
	for (int i = length_array - 1;i >= 0;i--) {
		cout << m[i];}
	cout<<endl;
}
*/ 
