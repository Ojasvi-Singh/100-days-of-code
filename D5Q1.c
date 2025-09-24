// DAY-5 Question-1
//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>  

int main() {
    float principal, rate, tim;
    float si,ci;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &tim);
    
    si=(principal * rate * tim) / 100;
    ci=principal * (pow((1 + rate / 100), tim) - 1);
    printf("\nSimple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}

