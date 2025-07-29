#include<stdio.h>
void main(){
	int x=4;
	int y=6;
	int z;
	z=x + ++x + y + --y;//4+5+6+5
	printf("%d,%d,%d",x,y,z);
	
}
//#include<stdio.h>
//void main(){
//	int x=4;
//	int y=6;
//	int z;
//	z=x++ + y - y-- +x +x;
//	printf("%d,%d,%d",x,y,z);
//	
//}
//#include<stdio.h>
//void main(){
//	int x=1,y;
//	y=x+x++ +x+x++;
////	y=x++;
//	printf("%d,%d",x,y);
//	
//}
