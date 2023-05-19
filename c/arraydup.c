#include<stdio.h>
int main()
{
	int i,j,n,arr[1000];
	scnaf("%d" ,&n);
	for( i=0;i<n;i++){
		scnaf("%d",&arr[i]);
	}
	for( i=0;i<n-1;i++){
		for( j=i+1;j<n;j++){
			if( arr[i]==arr[j]){
				printf("%d", arr[j]);
			}
		}
	}
	return 0;
}
