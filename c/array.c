/*  Arrays */
#include<stdio.h>
int main()
{
	
	int n,arr[100],i,j,a=0,ev=0,od=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		a=*(arr+i);
		if(a%2)
		{
			od=od+1;
		}
		else
		{
			ev=ev+1;
		}
	}
	printf("%d %d",ev,od);
}
