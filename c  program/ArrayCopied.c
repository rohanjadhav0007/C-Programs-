#include<stdio.h>
void main(){
	int arr[5],i,arr1[5];
	printf("Enter Data to array :- ");
	for(i=0;i<=4;i++)
	scanf("%d",&arr[i]);
	
	for(i=0;i<=4;i++)
		arr1[i]=arr[i];
	printf("Copide array :- ");
	for(i=0;i<=4;i++)
	printf("%d ",arr[i]);
		
}
