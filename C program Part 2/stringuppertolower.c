#include<stdio.h>
void main(){
	char name[20],i,len=0,str1[20];
	printf("Enter your name :- ");
	gets(name);
	printf("%s",strlwr(name));
	printf("\n");
	printf("%s",strupr(name));
	
}
