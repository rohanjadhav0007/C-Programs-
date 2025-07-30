#include<stdio.h>
void main(){
	int n1,n2,res,choise;
	printf("Enter First Number :- ");
	scanf("%d",&n1);
	printf("Enter Second Number :- ");
	scanf("%d",&n2);
	printf("Enter Choise (1:add,2:sub,3:multi,4:div) :- ");
	scanf("%d",&choise);
	switch(choise){
		case 1:res=n1+n2;printf("Addition is :- %d",res);
			break;
		case 2:res=n1-n2;printf("subtraction is :- %d",res);
			break;
		case 3:res=n1*n2;printf("Multiplication is :- %d",res);
			break;
		case 4:res=n1/n2;printf("Division is :- %d",res);
			break;
		default:printf("Invalid Option");
	}
	
}
