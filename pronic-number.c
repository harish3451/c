/* pronic number
 product of two consecutive number is called pronic number
 ex 6== 2*3
    12== 3*4
    
    
*/

#include<stdio.h>
int pronic(int n)
{
	int i,j,b=n;
	while(n)
	{
		i=n-1;
		j=n-2;
		if(i*j==b)
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
