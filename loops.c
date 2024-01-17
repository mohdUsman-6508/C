#include <stdio.h>

int main() {
  // Your code here

  int num,fact=1,fact2=1,fact3=1;

  printf("enter a nubmer: \n");
  scanf("%d",&num);
    int tem=num;

  for(int i=num;i>0;i--){
    fact*=i;
  }
  
  while (num>0)
  {
    fact2*=num--;
  }


  do{

      fact3*=tem--;

  }while (tem>1);

  printf("%d %d %d \n",fact,fact2,fact3);
  return 0;
}
