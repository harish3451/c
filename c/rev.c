#include<stdio.h>
int reverse(int n)
{
    int i,rev;
    while(n!=0)
    {
        i=n%10;
        n=n/10;
        rev=rev*10+i;
    }
    return rev;
    
}
int odev(int n)
{
    
    int od=0,ev=0;
    int i=0,j;
    while(n!=0)
    {
        i=i+1;
        j=n%10;
        n=n/10;
        if(i%2!=0)
        {
            ev=ev+j;
        }
        if(i%2==0)
        {
            od=od+j;
        }
        
    }
    printf("%d %d",ev,od);
    n=ev-od;
    if(n==0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    n=reverse(n);
    n=odev(n);
    if(n==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
    
