#include <stdio.h>

int main() {
  // Your code here
  int num;
  printf("Check a number(prime) :");
  scanf("%d",&num);
  int flag=1;


  for(int i=2;i<num;i++){
    if(num%i==0){
      printf("%d is not a prime number",num);
      flag=0;
      break;
    }
  }

  if(num==1) printf("1 is not a prime number");

  if(flag && num!=1)printf("%d is a prime number \n",num);
  
  
  return 0;
}
