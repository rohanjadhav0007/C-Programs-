#include<stdio.h>
void main(){
	char name[20],i,len=0,str1[20];
	printf("Enter your name :- ");
	gets(name);
//	for(i=0;name[i]!='\0';i++)
//	str1[i]=name[i];
//	str1[i]='\0';
	strcpy(str1,name);
	printf("copied string is :-%s",str1);
}
