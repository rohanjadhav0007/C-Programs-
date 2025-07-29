//#include<stdio.h>
//void main() {
//	int basicSalary;
//    float hra, da, grossSalary;
//
//    printf("Enter the basic salary of the employee: ");
//    scanf("%f", &basicSalary);
//
//    if (basicSalary <= 10000) {
//        hra = 0.20 * basicSalary;
//        da = 0.80 * basicSalary;
//    } else if (basicSalary <= 20000) {
//        hra = 0.25 * basicSalary;
//        da = 0.90 * basicSalary;
//    } else {
//        hra = 0.30 * basicSalary;
//        da = 0.95 * basicSalary;
//    }
//
//    grossSalary = basicSalary + hra + da;
//
//    printf("Basic Salary: RS%.2f\n", basicSalary);
//    printf("House Rent Allowance (HRA): RS%.2f\n", hra);
//    printf("Dearness Allowance (DA): RS%.2f\n", da);
//    printf("Gross Salary: Rs%.2f\n", grossSalary);
//}

#include <stdio.h>

void main() {
	int basicSalary;
    float hra, da, grossSalary;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    hra = (basicSalary <= 10000) ? (0.20 * basicSalary) :
          (basicSalary <= 20000) ? (0.25 * basicSalary) :
                                   (0.30 * basicSalary);

    da = (basicSalary <= 10000) ? (0.80 * basicSalary) :
         (basicSalary <= 20000) ? (0.90 * basicSalary) :
                                  (0.95 * basicSalary);

    grossSalary = basicSalary + hra + da;

    printf("Basic Salary: Rs%.2f\n", basicSalary);
    printf("House Rent Allowance (HRA): RS%.2f\n", hra);
    printf("Dearness Allowance (DA): RS%.2f\n", da);
    printf("Gross Salary: RS%.2f\n", grossSalary);

}


