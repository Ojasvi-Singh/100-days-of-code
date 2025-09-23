//DAY-4 Question-2
//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main(){
   int n,c=0,sum=0;
   printf("Enter the value of n: ");
   scanf("%d",&n);
   while (c<n){
        c=c+1;
        sum=sum+c;
   }
    printf("The sum of the numbers are %d\n",sum);
    return 0;
}

