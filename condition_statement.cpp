#include<stdio.h>
int main()
{
	int number;
	printf("enter a number :");
	scanf("%d",&number);
	if(number>0){
		printf("%d is positive",number);
	}else{
		printf("%d is negitive",number);
	}
	return 0;
}
