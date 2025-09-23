//DAY-3 Question-2
//Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main(){
   int A,B,temp;
   printf("Enter A:");
   scanf("%d",&A);
   printf("Enter B:");
   scanf("%d",&B);
   temp=A;
   A=B;
   B=temp;
   printf("%d",A);
   printf("\n%d",B);
    return 0;
}

