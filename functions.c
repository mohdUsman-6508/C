#include <stdio.h>

float sqArea(float side);
float sqPerimeter(float side);

void hello(){
  printf("marhaba! ");
}

int main(){
   printf("%f \n",sqArea(10));
   printf("%f \n",sqPerimeter(4));
   hello();
   sum(3,4);
}

float sqArea(float side){
   float area=side*side;
   return area;
}

float sqPerimeter(float side){
  float perimeter=4*side;
  return perimeter;
}

int sum(int a,int b){
  printf("sum of %d and %d is: %d ",a,b,a+b);
  return a+b;
}