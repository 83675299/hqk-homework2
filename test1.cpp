#include<iostream>
#include<string.h>
using namespace std;
int change1(char c[]);
int main()
{
	int a;
	char sz[100]={"��"};
	a=change1(sz);
	if(a==5) 
	cout<< "���Գɹ�" <<endl;
	else cout<< "����ʧ��"<<endl;
	return 0;
}

int change1(char sz[])
{
	int n=-1;
	if(strcmp(sz,"��")==0) n=0;
	if(strcmp(sz,"һ")==0)n=1;
	if(strcmp(sz,"��")==0)n=2;
	if(strcmp(sz,"��")==0)n=3;
	if(strcmp(sz,"��")==0)n=4;
	if(strcmp(sz,"��")==0)n=5;
	if(strcmp(sz,"��")==0)n=6;
	if(strcmp(sz,"��")==0)n=7;
	if(strcmp(sz,"��")==0)n=8;
	if(strcmp(sz,"��")==0)n=9;
	if(strcmp(sz,"ʮ")==0)n=10;
	return n;
}
