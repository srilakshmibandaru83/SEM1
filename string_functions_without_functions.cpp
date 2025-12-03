#include<stdio.h>
#include<string.h>
int main(){
	int option,len,flag;
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
			len =0;
			for(int i=0;s1[i]!='\0';i++){
				len=len+1;
			}printf("length of the string is : %d",len);
			break;
		case 2:
			getchar();
			printf("enter the string-1:");
			scanf("%[^\n]",s1);
			for(int i=0;s1[i]!='\0';i++){
				s2[i]=s1[i];
				
				s2[i]='\0';
				printf("copied string is :%s",s2);
				break;
			}
		
		case 3:
			getchar();
			printf("enter the string-1:");
			scanf("%[^\n]",s1);
			getchar();
			printf("enter the string-2:");
			scanf("%[^\n]",s2);
			flag=0;
			for(int i=0;s1[i]!='\0' || s2[i]!='\0';i++){
				if(s1[i]!=s2[i]){
					flag=1;
					break;
				}
				if(flag!=1){
					printf("true");
				}else{
					printf("false");
				}
		}
			break;
		case 4:
			getchar();
			printf("enter the string-1");
			scanf("%[^\n]",s1);
			for(int i=-1;s1[i]=='\0';i++){
				printf("%c",s1[i]);
			}
			break;
		case 5:
			getchar();
			printf("enter the string-1:");
			scanf("%[^\n]",s1);
			getchar();
			printf("enter the string-2:");
			scanf("%[^\n]",s2);
			
			for(int i=0;s[i]!='\0';i++){
				
			}
			break;
		case 6:
			getchar();
			printf("enter the string-1");
			scanf("%[^\n]",s1);
			
			for(int i=0;s1[i]!='\0';i++){
				if(s1[i]>='a' && s1[i]<='z'){
					s1[i]=s1[i]-32;
				}
			}printf("%s",s1)
			break;
		case 7:
			getchar();
			printf("enter the string-1");
			scanf("%[^\n]",s1);
			for(int i=0;s1[i]!='\0';i++){
				if(s1[i]>='a' && s1[i]<='z'){
					s1[i]=s1[i]+32;
				}
			
			printf("lower case of the string is:%s",strlwr(s1));
			break;
		default:
			printf("invalid option");
	}
	return 0;
}
