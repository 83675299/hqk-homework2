#include<stdio.h>
#include<string.h>
int change1(char c[]);
void change2(int s);
void change3(int s);
int main()
{
	char sz1[100],sz2[100],sz3[100],l1[100],l2[100]; 
	int a,b,i,j,k,t,m,n,f,sum=0;
	scanf("%s%s ���� %s",l2,l1,sz1);
	sum=change1(sz1);
	while(strcmp(l1,"Ǯ��")==0)
	{ 
	scanf("%s%s",l1,l2);
	if(strcmp(l1,"Ǯ��")!=0)
	break;
	scanf("%s",sz2);
	if(strcmp(l2,"����")==0)
	{
	f=1;
	sum=sum+change1(sz2);
	}
	else if(strcmp(l2,"����")==0)
	{
	f=-1;
	sum=sum-change1(sz2);
	}
	} 
	if(sum>=10)  {
	change2(sum);
	change3(sum);
	}
	else if(sum>0) change3(sum);
	else printf("meiqianla");
	return 0;
}

int change1(char sz[])
{
	int n;
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
void change2(int sum)
{
	int n=sum,i,j;
	i=sum/10;
	switch(i) 
	{
		case 1: break;
		case 2: printf("��");break;
		case 3: printf("��");break;
		case 4: printf("��");break;
		case 5: printf("��");break;
		case 6: printf("��");break;
		case 7: printf("��");break;
		case 8: printf("��");break;
		case 9: printf("��");break;
	}
	printf("ʮ");
	}
void change3(int sum)
{
	switch(sum%10) 
	{
		case 0: break;
		case 1: printf("һ");break;
		case 2: printf("��");break;
		case 3: printf("��");break;
		case 4: printf("��");break;
		case 5: printf("��");break;
		case 6: printf("��");break;
		case 7: printf("��");break;
		case 8: printf("��");break;
		case 9: printf("��");break;
	}
}
