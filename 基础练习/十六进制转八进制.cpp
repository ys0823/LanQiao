/*
问题描述
　　给定n个十六进制正整数，输出它们对应的八进制数。

输入格式
　　输入的第一行为一个正整数n （1<=n<=10）。
　　接下来n行，每行一个由0~9、大写字母A~F组成的字符串，表示要转换的十六进制正整数，每个十六进制数长度不超过100000。

输出格式
　　输出n行，每行为输入对应的八进制正整数。

　　【注意】
　　输入的十六进制数不会有前导0，比如012A。
　　输出的八进制数也不能有前导0。

样例输入
　　2
　　39
　　123ABC

样例输出
　　71
　　4435274

　　【提示】
　　先将十六进制数转换成某进制数，再由某进制数转换成八进制。
*/ 

#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
算法解释：
        采用字符串方式接收待转换的十六进制数。用对应函数将其转换为二进制数，存在字符串中，再用数学方法将其对应的二进制转换为八进制值，结果存为vector<int>类型并打印。
遇到问题的解决方法：
        1. 十六进制转二进制，1个十六进制位对应4个二进制位,但3个二进制位，对应1个八进制位。可能出现二进制转为八进制时，位数不正确导致错误。如A12为1010 0001
        转为八进制时： 10 100 001 ,前面只有两个二进制数10，不能与八进制相匹配。
         - solution: 判断存储二进制的vector长度，flag = 3 - Bin.length()%3; flag即为二进制vector应该在前面添加0的个数 
        2. 题目要求八进制首位不能输出0，如39转换结果为071。
         - solution: 返回算法,考虑解决该问题的过程中,发现在输出时控制是较为简单的方法，即在输出时检测八进制首位是否为0，为0则不输出。
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
	//十六进制转十进制 
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

	//十进制转八进制
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
