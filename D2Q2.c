//DAY-2 Question-2
//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main(){
   float radius,area,circ;
   printf("Enter the radius: ");
   scanf("%f",&radius);
   area=3.14*(radius*radius);
   circ=2*(3.14*radius);
   printf("Area of circle is %f\n",area);
   printf("Circumference of circle is %f\n",circ);
    return 0;
}
