#include<iostream>
#include<string.h>
using namespace std;
int change1(char c[]);
int main()
{
	int a;
	char sz[100]={"五"};
	a=change1(sz);
	if(a==5) 
	cout<< "测试成功" <<endl;
	else cout<< "测试失败"<<endl;
	return 0;
}

int change1(char sz[])
{
	int n=-1;
	if(strcmp(sz,"零")==0) n=0;
	if(strcmp(sz,"一")==0)n=1;
	if(strcmp(sz,"二")==0)n=2;
	if(strcmp(sz,"三")==0)n=3;
	if(strcmp(sz,"四")==0)n=4;
	if(strcmp(sz,"五")==0)n=5;
	if(strcmp(sz,"六")==0)n=6;
	if(strcmp(sz,"七")==0)n=7;
	if(strcmp(sz,"八")==0)n=8;
	if(strcmp(sz,"九")==0)n=9;
	if(strcmp(sz,"十")==0)n=10;
	return n;
}
