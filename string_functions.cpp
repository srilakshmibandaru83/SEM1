#include<stdio.h>
#include<string.h>
int main(){
	int option;
	char s1[10],s2[10],s3[10];
	printf("1.string length\n");
	printf("2.string copy\n");
	printf("3.string compare\n");
	printf("4.string reverse\n");
	printf("5.string concadination\n");
	printf("6.string lower case\n");
	printf("7.string upper case\n");
	printf("choose the option(i.e number) : ");
	scanf("%d",&option);
	switch(option){
		case 1:
			getchar();
			printf("enter the string-1:");
			scanf("%[^\n]",s1);
			printf("the length of the string is : %d",strlen(s1));
			break;
		case 2:
			getchar();
			printf("enter the string-1:");
			scanf("%[^\n]",s1);
			strcpy(s3,s1);
			printf("the string is copied %s",s3);
			break;
		case 3:
			getchar();
			printf("enter the string-1:");
			scanf("%[^\n]",s1);
			getchar();
			printf("enter the string-2:");
			scanf("%[^\n]",s2);
			printf("the string is compared %d",strcmp(s1,s2));
			break;
		case 4:
			getchar();
			printf("enter the string-1");
			scanf("%[^\n]",s1);
			printf("the reversed string is : %s",strrev(s1));
			break;
		case 5:
			getchar();
			printf("enter the string-1:");
			scanf("%[^\n]",s1);
			getchar();
			printf("enter the string-2:");
			scanf("%[^\n]",s2);
			printf("the concaded string is: %s",strcat(s1,s2));
			break;
		case 6:
			getchar();
			printf("enter the string-1");
			scanf("%[^\n]",s1);
			printf("upper case of the string is:%s",strupr(s1));
			break;
		case 7:
			getchar();
			printf("enter the string-1");
			scanf("%[^\n]",s1);
			printf("lower case of the string is:%s",strlwr(s1));
			break;
		default:
			printf("invalid option");
	}
	return 0;
}
