#include<stdio.h>
void main(){
	int n1,n2,max;
	printf("Enter First Number :- ");
	scanf("%d",&n1);
	printf("Enter Second Number :- ");
	scanf("%d",&n2);
	
	max=(n1>n2)?n1:n2;
	printf("max is:- %d",max);
	printf(n1%2==0?"\nEven":"\nOdd");
		}
