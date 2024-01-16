#include <stdio.h>

int main(){

  printf("Enter radius(cm) :");
  float radius;
  scanf("%f",&radius);
  float area=(3.14*radius*radius);

  printf("Area (cm^2): %f \n",area);

}