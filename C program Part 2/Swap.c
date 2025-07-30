#include<stdio.h>
void main(){
	
	int a=3,b=-11,t;
	printf("Original values a = %d and b = %d. ",a,b);
	a=b-a;//t=a;
	b=b-a;//a=b;
	a=b+a;//b=t;
	printf("\nAfter Swapping values a = %d and b = %d. ",a,b);
}
