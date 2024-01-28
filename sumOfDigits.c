#include <stdio.h>

int sumOfDigits(int number);

int main(){
   int number=786 ;
   int sum= sumOfDigits(number);
   printf("sum of digits of %d is %d ",number,sum);

return 0;
}

int sumOfDigits(int number){
  int sum=0;
  while(number>0){
    int digit=number%10;
    sum+=digit;
    number/=10;
  }

  return sum;
}