#include<stdio.h>
void main(){
	
	int n1,n2,add,sub,div,mul;
	printf("Enter First Number :- ");
	scanf("%d", &n1);
	printf("Enter Scond Number :- ");
	scanf("%d", &n2);
	add = n1 + n2;
	printf("Addition is :- %d",add);
	sub = n1 - n2;
	printf("\nsubtraction is :- %d",sub);
	div = n1 / n2;
	printf("\ndivision is :- %d",div);
	mul = n1 * n2;
	printf("\nmultiplication is :- %d",mul);
	
}
