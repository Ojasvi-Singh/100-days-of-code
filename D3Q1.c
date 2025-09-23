//DAY-3 Question-1
//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main(){
   float celcius,farenhite;
   printf("Enter the temperature in celcius: ");
   scanf("%f",&celcius);
   farenhite=((9*celcius)/5)+32;
   printf("%f",farenhite);
    return 0;
}

