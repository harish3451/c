#include<stdio.h>
int binary(int n)
{
	int i,j,k=1;
	while(n)
	{
		i=n%2;
		n=n/2;
		j=j+i*k;
		k=k*10;
	}
	return j;
}
int decimal(int n)
{
	int i,j=0,k=1;
	//printf("  \n%d\n",n);
	while(n)
	{
		i=n%10;
		n=n/10;
		j=j+i*k;
	//	printf("  %d ",j);
		k=k*2;
	}
	//printf(" %d ",j);
	return j;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",binary(n));
	printf("\n%d",decimal(binary(n)));
	return 0;
}
