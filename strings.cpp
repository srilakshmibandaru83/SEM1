#include<stdio.h>
int main(){
	int i;
	char s[100];
	printf("enter a sentence");
	fgets(s,sizeof(s),stdin);
	printf("%s\n",s);
	printf("the words in the string are :\n ");
	for(i=0;s[i]!='\0';i++){
		if(s[i]==' '){
			printf("\n");
		}else{
			printf("%c",s[i]);
		}
	}
	return 0;
}
