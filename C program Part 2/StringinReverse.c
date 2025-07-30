#include<stdio.h>
void main(){
	char name[20],i,len=0;
	printf("Enter your name :- ");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	len++;
	len--;
	printf("\nString in reverse order :- ");
	for(;len>=0;len--)
	printf("%c",name[len]);
}
