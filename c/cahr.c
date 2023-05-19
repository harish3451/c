#include<stdio.h>
int main()
{
	int n,i;
	char a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	printf("%s",a[5]);
	return 0;
}
