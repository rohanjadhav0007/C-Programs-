#include<stdio.h>
void reverse(int no){
	int rem,rev=0;
	while(no>0){
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	printf("Reverse :- %d",rev);
}
void main(){
	int n=234567;
	reverse(n);
}

