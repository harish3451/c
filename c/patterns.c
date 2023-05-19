#include<stdio.h>
//void pattern1(int n)
/*{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/
void pattern2(int n)
{
	int i,j;
	for(i=n;i>=0;i--)
	{
		printf(" ");
		for(j=1;j>=n;j++)
		{
			printf("*");
		}////
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
//	pattern1(n);
	pattern2(n);
	return 0;
}
