#include<stdio.h>
int find(int n)
{
	int a=0,b=1,c,i=3;
	if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return 2;
	}
	while(n)
	{
		c=a+b;
		a=b;
		b=c;
		if(c==n)
		{
			return i;
		}
		i=i+1;
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
	n=find(n);
	if(n)
	{
		printf("%d yes",n);
	}
	else
	{
		printf("false");
	}
	return 0;
	
}
