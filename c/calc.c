#include<stdio.h>
int ain(float n,float p,float m){
	float i,j=0;

	while(j<261)
	{
		i=n*p/100;	
		n=n+i;
		j++;
		printf("%.2f %.2f %.0f\n",i,n,j);
	}
	return 0;
}
int main()
{
	float n,p,m;
	scanf("%f%f%f",&n,&p,&m);
	ain(n,p,m);
	return 0;
}
