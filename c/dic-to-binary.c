#include<stdio.h>
int bit(int n)
{
	int i,j=0,k=1;
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
	int i,j,cnt=0,sum=0,k=0;
	while(n)
	{
		i=n%10;
		n=n/10;
		for(j=0;j<=cnt;j++)
		{
			k=i*2*k;
			printf(" %d ",k);
		}
		sum=sum+k;
		printf("%d",cnt);
		cnt++;
	}
	return sum;
}
int main()
{
	int n,i,s;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&s);
		s=bit(s);
		printf(" %d ",s);
		s=decimal(s);
		printf(" %d ",s);
	}
	return 0;
}
