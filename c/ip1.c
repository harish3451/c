#include<stdio.h>
int nearest(int n)
{
	int r;
	if(n>=2 && n<=4)
	{
		printf("2 ");
		return r=2;
		
	}
	if(n>4 && n<=8)
	{
		printf("3 ");
		return r=3;
		
	}
	if(n>8 && n<=16)
	{
		printf("4 ");
		return r=4;
		
	}
	if(n>16 && n<=32)
	{
		printf("5 ");
		return r=5;
		
	}
	if(n>32 && n<=64)
	{
		printf("6 ");
		return r=6;
		
	}
	if(n>64 && n<=128)
	{
		printf("7 ");
		return r=7;
		
	}
	if(n>128 && n<=256)
	{
		printf("8 ");
		return r=8;
		
	}
}
int bit(int n)
{
	int i,j=0;
	for(i=8;i>=n;i--)
	{
		j=2^i+j;
	}
	return j;
	
}
int main()
{
	int n;
	int a,b,c,d;
	scanf("%d",&n);
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>225 || b>225 || c>255 || d>225)
	{
		printf("invalid ip");
		return 0;
	}
	n=nearest(n);
	n=bit(n);
	printf("%d\n",n);
	
	printf("%d.%d.%d.%d",a,b,c,d);
}
