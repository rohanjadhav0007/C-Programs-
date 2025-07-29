#include<stdio.h>
void main(){
	int i,j;
	for(i=1,j=5;i<=5;i++,j--){
		if(i==j)
			continue;
	printf("%d %d\n",i,j);
}
}
