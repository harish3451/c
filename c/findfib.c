#include<stdio.h>
int find(int n)
{
	int a=0,b=1,i,c;
	if(n==1)
	{
		return a;
	}
	if(n==2)
	{
		return b;
	}
	for(i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
int main()
{
	int n;
	scanf("%d",&n);
	n=find(n);
	printf("%d",n);
	return 0;
}
