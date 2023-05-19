#include<stdio.h>
 int pow(int a, int b)
{
	int i,c=a;
	if(a<0 || b<0)
	{
		printf("a and b should be positive");
		return 0;
	}
	if(b==0)
	{
		return 1;
	}
	for(i=1;i<b;i++)
	{
		a=a*c;
	}
	return a;
}
int main()
{
	int n,i;
	int a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		c=pow(a,b);
		if(n>=0)
		{
			printf("%d",c);
		}
		
	}
	return 0;
}
