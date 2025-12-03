 #include<stdio.h>
int main(){
	int b,n;
	printf("enter size :");
	scanf("%d",&n);//getting size of array
	
	//getting input for arrays
	int a[n];
	printf("enter roll no : ");
	for(int i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	
	printf("enter number to check :");
	scanf("%d",&b);//the number whose index need to be find
	
	//checking the index of the number
	int value=0;
	for(int i=0;i<n;i++){ 
		if(a[i]==b){
			printf("the index of %d is :%d",b,i); //displaying the index
			value=1;
			break;
		}
	}
	if(value==0){
		printf("element not found");
	}
	

	return 0;
}
