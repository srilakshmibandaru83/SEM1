#include<stdio.h>
int main(){
	int a,b,i,j,count;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++){
		count=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
			count=count+1;
			}
		}
			
		if(count==2){
			printf("%d \n",i);
		}
	}return 0;
	
}
