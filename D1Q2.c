//DAY-1 Question-2
//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main(){
    int num1,num2,sum,diff,prod,quo;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    sum=(num1+num2);
    diff=(num1-num2);
    prod=(num1*num2);
    quo=(num1/num2);
    printf("The sum is %d\n",sum);
    printf("The difference is %d\n",diff);
    printf("The product is %d\n",prod);
    printf("The quotient is %d\n",quo);
    return 0;
}
