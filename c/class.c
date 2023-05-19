/*#include<stdio.h>
void fbc(int n)
{
	int a=0,b=1,i,c;
	if(n==0)
	{
		return;
	}
	if(n==1)
	{
		printf("%d ",a);
		return;
	}
	printf("%d %d ",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
			
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	fbc(n);
	return 0;
}*/
#include<stdio.h>
int main()
{
	int num,n;
	scanf("%d",&num);
	n=find_evenfib(num);
	printf("%d",n);
	return 0;
}









