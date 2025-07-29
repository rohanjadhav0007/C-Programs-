#include<stdio.h>
void main(){
	int arr[5],i,sum=0,sq[5],cu[5];
	printf("Enter Data to array :- ");
	for(i=0;i<=4;i++)
	scanf("%d",&arr[i]);
	printf("\nArray Data :- ");
	for(i=0;i<=4;i++)
	printf("%d ",arr[i]);
	printf("\nArray in reverse order :- ");
	for(i=4;i>=0;i--)
	printf("%d ",arr[i]);
	for(i=0;i<=4;i++)
	sum+=arr[i];
	printf("\nAddition of array elements :- %d",sum);
	for(i=0;i<=4;i++)
	{
		sq[i]=arr[i]*arr[i];
		cu[i]=arr[i]*arr[i]*arr[i];
	}
	printf("\nNumber\tSquare\tCube\n");
	for(i=0;i<=4;i++)
	printf("%4d\t%4d\t%4d\n",arr[i],sq[i],cu[i]);
}
