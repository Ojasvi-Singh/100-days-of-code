//DAY-4 Question-1
//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main(){
   int A,B;
   printf("Enter A:");
   scanf("%d",&A);
   printf("Enter B:");
   scanf("%d",&B);
    A = A + B;
    B = A - B;
    A = A - B;
   printf("%d",A);
   printf("\n%d",B);
    return 0;
}

