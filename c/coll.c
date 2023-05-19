#include<stdio.h>
int coll(int n)
{
	printf("%d ",n);
	if(n==1)
	{
		return 0;
	}
	if(n%2==0)
	{
		return coll(n/2);
	}
	return coll(3*n+1);
}
int main()
{
	int n;
	scanf("%d",&n);
	n=coll(n);
}
