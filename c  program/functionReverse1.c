#include<stdio.h>
int reverse(int no){
	int rem,rev=0;
	while(no>0){
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	return rev;
}
void main(){
	int n=234567;
	int rev=reverse(n);
	printf("Reverse :- %d",rev);
}

