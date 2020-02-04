#include<stdio.h>
#include<string.h>
int change1(char c[]);
void change2(int s);
void change3(int s);
int main()
{
	char sz1[100],sz2[100],sz3[100],l1[100],l2[100]; 
	int a,b,i,j,k,t,m,n,f,sum=0;
	scanf("%s%s 等于 %s",l2,l1,sz1);
	sum=change1(sz1);
	while(strcmp(l1,"钱包")==0)
	{ 
	scanf("%s%s",l1,l2);
	if(strcmp(l1,"钱包")!=0)
	break;
	scanf("%s",sz2);
	if(strcmp(l2,"增加")==0)
	{
	f=1;
	sum=sum+change1(sz2);
	}
	else if(strcmp(l2,"减少")==0)
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
void change2(int sum)
{
	int n=sum,i,j;
	i=sum/10;
	switch(i) 
	{
		case 1: break;
		case 2: printf("二");break;
		case 3: printf("三");break;
		case 4: printf("四");break;
		case 5: printf("五");break;
		case 6: printf("六");break;
		case 7: printf("七");break;
		case 8: printf("八");break;
		case 9: printf("九");break;
	}
	printf("十");
	}
void change3(int sum)
{
	switch(sum%10) 
	{
		case 0: break;
		case 1: printf("一");break;
		case 2: printf("二");break;
		case 3: printf("三");break;
		case 4: printf("四");break;
		case 5: printf("五");break;
		case 6: printf("六");break;
		case 7: printf("七");break;
		case 8: printf("八");break;
		case 9: printf("九");break;
	}
}
