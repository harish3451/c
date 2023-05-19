#include<stdio.h>
int find(int n)
{
	float a=0,b=1,c;
	float d;
	if(n==a || n==b)
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
			d=(a+b)/2;
			
			if(n<d)
			{
				return a;
			}
			if(n>d)
			{
				return b;
			}
			if(n==d)
			{
				printf("%.0f ",a);
				return b;
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	n=find(n);
	if(n==1)
	{
		printf("True");
		return 0;
	}
	printf("%d",n);
	return 0;
	
}
