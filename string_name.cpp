#include<stdio.h>
#include<string.h>
int main()
{
	char name[10],full_name[10],address[30];
	
	printf("enter your name");
	scanf("%s",name);
	printf("%s",name);
	
    getchar();
	printf("enter your full name:");
	fgets(full_name,sizeof(full_name),stdin);
	printf("\n%S",full_name);
	return 0;
}
