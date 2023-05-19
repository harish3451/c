#include<stdio.h>
int factorial(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n*factorial(n-1);
}
int main()
{
	int n;
	scanf("%d",&n);
	n=factorial(n);
	printf("%d",n);
	return 0;
}
