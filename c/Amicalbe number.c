#include<stdio.h>
int amicable(int n)
{
    int i=1,j,sum=0,b=n;
    for(i=1;i<n;i++)
    {   
        if(n%i==0)
        {
        	j=i;
            
        
		    b=b/i;
		    sum=sum+i;
        }	
         
    }
    return sum;
}

int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=a;
    d=b;
    a=amicable(a);
    b=amicable(b);
    
    if(a==d && b==c)
    {   
        printf("Amicable Number");
        return 0;
    }
    printf("Not Amicable Number");
    return 0;
}
    
