#include<stdio.h>
int multi(int a, int b)
{
	if(a==0)
	{
		return 0;
	}
	if(a%2==1)
	{
		return b+multi(a/2,b*2);
	}
	return multi(a/2,b*2);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=multi(a,b);
	printf("%d",a);
	return 0;
}
