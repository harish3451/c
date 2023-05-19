#include<stdio.h>
int main()
{
	int i=10,j;

	for(j=1;j<=i;j++)
	{
		scanf("%d",&i);		
		printf("%d ",j%2);
	}
}
