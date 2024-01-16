#include <stdio.h>

int main(){

  int number;
  printf("Enter a number(real): ");
  scanf("%d",&number);
/*
cube is the multiplication of the number by itself three times;
*/
  int cube=number*number*number;
  printf("Cube of %d is : %d \n",number,cube);


}