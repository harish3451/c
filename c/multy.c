#include<stdio.h>
int mulity(int a,int b)
{
	int i=0;
	while(a)
	{
		if(a%2!=0)
		{
			i=i+b;
		}
		a=a/2;
		b=b*2;	
	}
	return i;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=mulity(a,b);
	printf("%d",a);
	return 0;
	
}
