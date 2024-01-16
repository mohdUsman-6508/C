#include <stdio.h>

int main(){

// remember to use 'format specifier' cautiously

float length,breadth;
printf("Enter length(cm): ");
scanf("%f",&length);

printf("Enter breadth(cm): ");
scanf("%f",&breadth);

float perimeter=2*(length+breadth);
printf("Perimeter of reactangle (cm): %f \n",perimeter);

}