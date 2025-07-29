#include<stdio.h>
void main(){
//	//initialisation
//	do{
//		statement
//		int/dec
//	}
//	while(condition);


//int i=1;
//do{
//	printf("%d ",i);
//	i++;
//}
//	while(i<=10);

//int no,sq;
//char choise;
//do
//{
//	printf("\nEnter number :- ");
//	scanf("%d",&no);
//	sq=no*no;
//	printf("\nSquare :- %d",sq);
//	printf("\nDo you want to continue (y/n) :- ");
//	scanf(" %c",&choise);
//	
//}
//while(choise=='y');
//printf("\n\nDone....");
//

int n1,n2,res,choise;
char Option;
do{
	printf("\n1 : Addition \n");
	printf("\n1 : subtraction \n");
	printf("\n1 : multiplication \n");
	printf("\n1 : division \n");
	printf("\nEnter your choice :- ");
	scanf("%d",&choise);
	
	printf("Enter First Number :- ");
	scanf("%d",&n1);
	printf("Enter Second Number :- ");
	scanf("%d",&n2);
	
	switch(choise){
		case 1:res=n1+n2;
			printf("Addition is :- %d ",res);
				break;
			case 2:res=n1-n2;
			printf("Subtraction is :- %d ",res);
				break;
				case 3:res=n1*n2;
			printf("Multiplication is :- %d ",res);
				break;
					case 4:res=n1/n2;
			printf("Division is :- %d ",res);
				break;
				default:printf("Invalid Option");
	}
	printf("\nDo you want to continue (y/n) :- ");
	scanf(" %c",&Option);
}
while(Option=='y' || Option=='Y');
printf("\n\nDone.......");
}
