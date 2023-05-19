#include<stdio.h>
int coin(int n)
{
	int i,j;
	for(i=1;i>0;i++)
	{
		for(j=1;j<=i;j++)
		{
			
			if(n==0)
			{
				return i-1;
			}
			n=n-1;
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	n=coin(n);
	printf("%d",n);
	return 0;
}
