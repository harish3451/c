/* Disarium number 
power(digit,position)+power(digit,position)+......
ex:- 175
1^1+7^2+5^3==175*/

#include<stdio.h>
int disarium(int n)
{
	int cnt=0,j,i=0,a,c=0,b,d=0;
	int rev=n;
	while(n)
	{
		j=n%10;
		n=n/10;
		cnt++;
	}
	for(i=cnt;i>0;i--)
	{
		
		j=rev%10;
		b=j;
		rev=rev/10;
		for(d=1;d<i;d++)
		{	
			j=j*b;
		}
		c=c+j;
	}
	return c;
}
int main()
{
	int n,b;
	scanf("%d",&n);
	b=n;
	n=disarium(n);
	if(n==b)
	{
		printf("True");
		return 0;
	}
	printf("False");
	return 0;
}
/*#include<stdio.h>
int rev(int n)
{
    int i,j=0,b=n,cnt,a=0,d,sum=0;
    while(n)
    {
        i=n%10;
        n=n/10;
        j=j*10+i;
    }
    while(j)
    {
        a++;
        i=j%10;
        j=j/10;
        d=i;
        for(cnt=1;cnt<=a;cnt++)
        {
            i=i*d;
        }
        sum=sum+i;
    }
    return sum;
}

int main()
{
    int n,b;
    scanf("%d",&n);
    b=n;
    n=rev(n);
    if(n==b)
    {
        printf("%d Disarium number",n);
        return 0;
    }
    printf("%d not a Disarium number",n);
    return 0;
}*/
