/* harshad number*/

#include<stdio.h>
int mehta(int n)
{
	int i,j=0;
	int b=n;
	if(n==1)
	{
		return 1;
	}
	while(n)
	{
		i=n%10;
		n=n/10;
		j=j+i;
	}
	if(b%j==0)
	{
		return mehta(b/j);
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	n=mehta(n);
	if(n==1)
	{
		printf("True");
		return 0;
	}
	printf("False");
	return 0;
}
