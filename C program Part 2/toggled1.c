#include <stdio.h>

void main() {
   char ch;
   printf("Enter any char :- ");
   ch=getchar();
   if(ch>=65 && ch<=90);
   	    ch=ch+32;
   	else
   	if(ch>=97 && ch<=122)
	   ch=ch-32;
	printf("converted character :- ")
	putchar(ch);   
	else
		if(ch>=48 && ch<=57)
			printf("Numeric");
		else
			printf("Special Symbol");		
}

