#include <stdio.h>

int main(){


  int num,divident;
  printf("Number(to be divided) : ");
  scanf("%d",&num);
  printf("Number(dividend) :");
  scanf("%d",&divident);
 

  (num%divident==0)?printf("%d is divisible by %d \n " ,num,divident):printf("%d is not divisible by %d \n " ,num,divident);
  printf("Happy coding:)");


}