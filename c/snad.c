/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,k;
    char str[100];
    scanf("%d",&n);
    printf("\n%d",n);
	for(i=0;i<n;i++)
	{
		scanf("%c",str[i]);
	}
    int j=n-1;
    
    while(j)
    {
        k=0;
        for(i=0;str[i]!='\0';i++)
        {
            str[k]=str[i];
            k++;
            i++;
        }
    }
    printf("%c asd",str[0]);
    return 0;
}

