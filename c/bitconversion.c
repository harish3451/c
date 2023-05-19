#include<stdio.h>
void bit(int n)
{
	int i,d=0;
	while(n)
	{
		i=n%2;
		n=n/2;
		d=d*10+i;
		printf("%d",i);
	}
	while(d)
	{	i=d%10;
		d=d/10;
		printf("\n%d",i);
	}
	
}
int main()
{
	int n;
	scanf("%d",&n);
	bit(n);
}
