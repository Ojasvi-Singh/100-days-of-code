// DAY-6 Question-2
//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (n==0){
        printf("The number is zero");
    }
    else{
        if (n>0){
            printf("The number is positive");
        }
        else{
            printf("The number is negative");
        }
    }
    return 0;
}
