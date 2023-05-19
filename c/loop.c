#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    int i;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(i=1;i<=9;i++)
    {

        if(i==a)
        {
            if(i==1)
            {
                printf("one\n");
            }
            else if(i==2)
            {
                printf("two\n");
            }
            else if(i==3)
            {
                printf("three\n");
            }
            else if(i==4)
            {
                printf("four\n");
            }
            else if(i==5)
            {
                printf("five\n");
            }
            else if(i==6)
            {
                printf("six\n");
            }
            else if(i==7)
            {
                printf("seven\n");
            }
            else if(i==8)
            {
                printf("eight\n");
            }
            else if(i==9)
            {
                printf("nine\n");
            }
        } 
        
    }
    for(i=1;i<=9;i++)
    {       
        
        if(i==b)
        {
            if(i==1)
            {
                printf("one\n");
            }
            else if(i==2)
            {
                printf("two\n");
            }
            else if(i==3)
            {
                printf("three\n");
            }
            else if(i==4)
            {
                printf("four\n");
            }
            else if(i==5)
            {
                printf("five\n");
            }
            else if(i==6)
            {
                printf("six\n");
            }
            else if(i==7)
            {
                printf("seven\n");
            }
            else if(i==8)
            {
                printf("eight\n");
            }
            else if(i==9)
            {
                printf("nine\n");
            }
        }
        
    }
    if(a>9 || b>9)
    {
        printf("nine\n");
    }
    if(a%2==0)
    {
        printf("even\n");
    }
    else {
        printf("odd\n");
    }
    if(b%2==0)
    {
        printf("even\n");
    }
    else {
        printf("odd\n");
    }
    return 0;
}

