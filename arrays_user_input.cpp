#include<stdio.h>
int main(){
	int n;
	printf("enter n");
	scanf("%d",&n);
	
	char names[n];
	
	printf("enter names of students:");
	
	for(int i=0;i<=n-1;i++){
		scanf("%s",&names[i]);
	}
	for(int i=0;i<=n-1;i++){
		printf("%c \n",names[i]);
	}
	return 0;
}
