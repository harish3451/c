#include<stdio.h>
int prft(float n, int p, int t)
{
	if(t==0)
	{
		return 0;
	}
	n=n+((n*p)/100);
	t=t-1;
	//printf(" %f ",n);
//	p=p+1;
	return prft(n,p,t);
}
int main()
{
	int n,p,t;
	
	scanf("%d%d%d",&n,&p,&t);
	n=prft(n,p,t);
	printf("%d ",n);
	n=n*51;
	printf("%d",n);
	return 0;	
}
