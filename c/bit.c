#include<stdio.h>
int main()
{
int n,i,j;
	scanf("%d",&n);
	while(n!=0)
	{
		j=n%2;
		n=n/2;
		i=i*10+j;
	}
    n=5;
	n=n^5;
	printf("%d",n);
}
