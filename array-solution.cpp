#include<stdio.h>
int main(){
	int sum=0,n;
	printf("enter size :");
	scanf("%d",&n);//getting size of array
	
	//getting input for arrays
	int a[n];
	printf("enter elements : ");
	for(int i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	
	//sum of elements in array
	
	for(int i=0;i<=n-1;i++){
		sum=sum+a[i];	
	}printf("the sum of elements : %d\n",sum);
	
	//changing the index value 3 from 8 to 18
	
	/*a[3]=18;
	for(int i=0;i<7;i++){
		printf("%d,",a[i]);
	}printf("\n");
	
	//printing the number in index 4
	
	printf("%d\n",a[4]);*/
	
	return 0;
}
