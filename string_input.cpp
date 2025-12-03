#include<stdio.h>
#include<string.h>
int main(){
	char name[10],full_name[20],address[30];
	printf("enter your name : ");
	scanf("%s",name);
	getchar();
	printf("enter your full name : ");
	gets(full_name);
	printf("enter your address : ");
	scanf("%s",address);
	printf("my name is %s \n",name);
	printf("my full name is %s \n",full_name);
	printf("my address is %s \n",address);
	
	return 0;
}
