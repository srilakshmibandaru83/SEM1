#include<stdio.h>
int main(){
	int n,a[n];
	printf("size of the array : ");
	scanf("%d",&n);
	
	printf("enter elements of array : ");
	for(int i=0;i<=n-1;i++){
		scanf("%d ",&a[i]);
	}
	printf("the array is : ");
	for(int i=0;i<n;i++){
		printf("%d %d",i,a[i]);
	}
	printf("\n");
	printf("the duplicate elements are : ");
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				printf("%d ",a[i]);
				break;
			}
		}
	}return 0;
}
