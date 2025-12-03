#include<stdio.h>
int main(){
	int n,a[n];
	printf("size of array :");
	scanf("%d",&n);
	printf("enter elements of array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("the array is: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}printf("\n");
	int i, j, temp;
    int swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0; 
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1])
			 {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }
   
    }printf("the sorted array is: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);

	}return 0;
}


