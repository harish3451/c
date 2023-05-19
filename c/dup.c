#include<stdio.h>
main(){	
	int i,j,k,n;
	printf("enter n value");
	scanf("%d ",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				n--;
				for(k=i;k<n;k++){
					arr[k]=arr[k+1];
				}
				i--;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
