// DAY-6 Question-1
//Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number to be checked: ");
    scanf("%d",&n);
    if (n%2==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}
