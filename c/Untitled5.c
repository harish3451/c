#include<stdio.h>
int main(){
	int n,i,j;
	int k;
	scanf("%d",&n);
	int s=n;
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for(i=0;i<s-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				
				for(k=j+1;k<n;k++){
					arr[j]=arr[k];
				}
				
				n--;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	return ;
}
