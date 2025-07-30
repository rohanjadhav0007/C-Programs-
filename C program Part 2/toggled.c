//ascii - Americane stadard code for Information Interchange
//0 - 255
//48 - 57 0 to 9
//65 - 90 A to Z
//97 - 122 a to z
#include <stdio.h>

int main() {
    int num = 65;
    for(;num<=90;num++)
    printf("%c ",num);
    printf("\n");
    num=97;
    for(;num<=122;num++)
    printf("%c ",num);
    printf("\n");
    num=48;
	for(;num<=57;num++)
    printf("%c ",num);

}

