#include <stdio.h>
int add(int a,int b);
int sub(int a,int b);
int pro(int a,int b);
int div(int a,int b);


int main(){
 int a;
 int b;
 printf("Enter number: \n");
 scanf("%d",&a);
 printf("Enter number:\n ");
 scanf("%d",&b);
 char c;
 printf("Enter operation to perform: {+,-,/,*} \n");
 scanf("%c",&c);
 int ans;

 switch (c)
 {
 case '+':
    ans=add(a,b);
    break;
 case '-':
    ans=sub(a,b);
    break;
 case '*':
    ans=pro(a,b);
    break;
 case '/':
    ans=div(a,b);
    break;

 }
 printf("%d",ans);

}


int add(int a,int b){
  return a+b;
}

int sub(int a,int b){
  return a-b;
}

int pro(int a,int b){
  return a*b;
}
int div(int a,int b){
  return a/b;
}