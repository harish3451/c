#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char str[1000];
    int i,j,sum,k=0,l;
    scanf("%s",str);
    for(i=0;i<10;i++)
    {
        sum=0;
        for(i=0;str[j]!='\0';i++)
        {
        	l=str[j]-'0';
            if(l==i)
            {
               sum++; 
               printf("%d\n",sum);
            }
        }
        printf("%d ",sum);
    }
    return 0;
}

