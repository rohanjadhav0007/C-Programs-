#include<stdio.h>
void main(){
	int arr[5],i;
	printf("Enter Data to array :- ");
	for(i=0;i<=4;i++)
	scanf("%d",&arr[i]);
	printf("\nArray Data :- ");
	for(i=0;i<=4;i++)
	printf("%d ",arr[i]);
	printf("\nArray in reverse order :- ");
	for(i=4;i>=0;i--)
	printf("%d ",arr[i]);
}
