#include<stdio.h>
void main(){
	int arr1[5],i,arr2[5],same=1;
	printf("Enter Data to first array :- ");
	for(i=0;i<=4;i++)
	scanf("%d",&arr1[i]);
	printf("Enter Data to second array :- ");
	for(i=0;i<=4;i++)
	scanf("%d",&arr2[i]);
	for(i=0;i<5;i++)
	{
		if(arr1[i]!=arr2[i])
		{
			same=0;
			break;                        
		}
	}
	if(same)
		printf("\nBoth Arrays are equal");
	else
		printf("\nBoth Arrays are not equal");
		
}
