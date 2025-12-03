#include<stdio.h>
#include<math.h>
int main(){
	int num,len=0,sum=0;
	printf("enter a num : ");
	scanf("%d",&num);
	int a=num,b=num;
	while(num){
		if(num%10!=0){
			len=len+1;
		}
		num=num/10;
	}printf("length is %d \n",len);
	while(a){
		sum=sum+(pow(a%10,len));
		a=a/10;
		
	}printf("the sum=%d\n",sum);
	if(b==sum){
		printf("the number %d is amstrong number",b);
	}else{
		printf("the number %d not an amstrong number",b);
	}return 0;
}
