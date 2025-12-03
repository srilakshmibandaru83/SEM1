#include<stdio.h>
int cp(int a,int b){
int sum=a+b;
return sum;
}
int main(){
	int sum,a,b;
	printf("enter a value of a and b");
	scanf("% d",&a);
	scanf("% d",&b);
	sum=cp(a,b);
	printf("%d",sum);
	return 0;
	}

