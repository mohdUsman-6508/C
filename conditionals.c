// if else if else, switch case default break

#include <stdio.h>

int main(){

int age=19;

//
if(age>=18) printf("You can vote \n");
else printf("You cannot vote \n");

int num1,num2,num3;

printf("enter 3 numbers: ");
scanf("%d %d %d",&num1,&num2,&num3);

if(num1>num2 && num1>num3){
    printf("Greater among %d %d %d is %d \n",num1,num2,num3,num1);
}
else if(num2>num1 && num2>num3){
  printf("Greater among %d %d %d is %d \n",num1,num2,num3,num2);
}
else{
  printf("Greater among %d %d %d is %d \n",num1,num2,num3,num3);
}

int bit=7;

switch(bit){
  case 1:printf("You are increadible.");
  break;
  case 0:printf("You are awesome.");
  break;
  default:printf("only 1 and 0");
}

}










