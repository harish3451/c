/* pronic number
 product of two consecutive number is called pronic number
 ex 6== 2*3
    12== 3*4
    
    
*/
/*
#include<stdio.h>
int pronic(int n)
{
	int i,b=n;
	while(n)
	{
		i=n-1;
		printf("%d %d\n",i,i+1);
		if(i*(i-1)==b)
		{
			
			return 1;
		}
		n=n-1;
	}
	return 0;
}
int main()
{
	int n,i,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		a=pronic(a);
		if(a==1)
		{
			printf("True\n");
		}
		else
		{
		printf("False\n");
	    }
	}
	return 0;
}
*/
/*
#include<stdio.h>
int pronic(int n)
{
	int i=1;
	printf("1 ");
	while(1)
	{
		if(i*(i+1)>n)
		{
			return 0;
		}
		printf("%d ",i*(i+1));
		
		i++;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	n=pronic(n);
	return 0;
}
*/





