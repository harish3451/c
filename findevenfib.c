#include<stdio.h>
int find_evenfib(int num)
{
	int a=0,b=1,c,i,d=2;
	if(num==1)
	{
		return 0;
	}
	while(num)
	{
		c=a+b;
		a=b;
		b=c;
		if(c%2==0)
		{
			if(d==num)
			{
				return c;
			}
			d=d+1;
		}
	}
}
int main()
{
	int num,n;
	scanf("%d",&num);
	n=find_evenfib(num);
	printf("%d",n);
	return 0;
	
}
