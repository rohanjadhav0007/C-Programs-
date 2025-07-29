#include<stdio.h>
void main(){
	int arr[3][3],i,j;
	printf("Enter values to 3*3 matrix :- ");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
		
	printf("\nMatrix :- \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}

}
