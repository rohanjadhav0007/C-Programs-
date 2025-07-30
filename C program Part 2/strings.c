#include<stdio.h>
void main(){
	char name[20],i,len=0;
	printf("Enter your name :- ");
	gets(name);
	printf("\nName :- ");
	puts(name);
//	for(i=0;name[i]!='\0';i++)
//		len++;
//		
//	printf("String length :- %d",len);
	len=strlen(name);
	printf("String length :- %d",len);
}
