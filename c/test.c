/*#include<stdio.h>
int order(int n)
{
    int i,j;
    j=n%10;
    n=n/10;
    while(n)
    {
        i=n%10;
        n=n/10;
        if(j<i)
        {
            return 0;
        }
        j=i;
     }
     return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    n=order(n);
    if(n==1)
    {
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
    
}*/

/*#include<stdio.h>
int game(int n)
{
    int i=1,j,b=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i*2;j++)
        {
            if(b>n)
            {
                return 0;
            }
            b=j+i
;        
        }
        if(b>n)
        {
            return 1;
        }
        
        
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    n=game(n);
    if(n==1)
    {
    	printf("patlu");
    	return 0;
	}
	printf("motu");
}*/

/*#include<stdio.h>
int wave(int n)
{
    int i,j;
    i=n%10;
    n=n/10;
    j=n%10;
    if(j>i)
    {
        return 1;
    }
    return 0;
}
int rev(int n)
{
    int i,j=0;
    while(n)
    {
        i=n%10;
        n=n/10;
        j=j*10+i;
    }
    printf("%d",j);
    return j;
}
int main()
{
    int n,b;
    
    scanf("%d",&n);
    b=n;
    n=wave(n);
    if(n==1)
    {
        n=rev(b);
        n=wave(n);
        if(n==1)
        {
            printf("Yes");
            return 0;
        }
        printf("No");
        return 0;
    }
    printf("No");
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,d,j=0,i=-1;
    scanf("%d%d",&n,&d);
    while(j==0)
    {
        j=n%d;
        n=n/d;
        i=i+1;
    }
    if(i>0)
    {
        printf("%d occurance",i);
        return 0;
    }
    printf("-1");
    return 0;
        
}*/
#include<stdio.h>
int factorial(int n)
{
	int i=0;
	while(n)
	{
		if(n%7==0)
		{
			n=n/7;
			i=i*10+7;
		}
		else if(n%5==0)
		{
			n=n/5;
			i=i*10+5;
		}
		else if(n%3==0)
		{
			n=n/3;
			i=i*10+3;
		}
		else if(n%2==0)
		{
			n=n/2;
			i=i*10+2;
		}
		return i;
	}
	printf("%d",i);
}
int main()
{
	int a;
	scanf("%d",&a);
	a=factorial(a);
	return 0;
}
        









