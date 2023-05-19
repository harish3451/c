#include<stdio.h>
int find(int n)
{
	int a=0,b=1,c,i;
	if(a==n)
	{
		return 1;
	}
	if(b==n)
	{
		return 1;
	}
	while(n)
	{
		c=a+b;
		a=b;
		b=c;
		if(c==n)
		{
			return 1;
		}
		if(c>n)
		{
			return 0;
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	n=find(n)
	if(n==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
	
}
