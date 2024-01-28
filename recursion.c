#include <stdio.h>
int power(int base,int power);
int main(){
   int result=power(5,3);
   printf("%d",result);

return 0;
}

int power(int base,int powr){
   if(powr==0) return 1;
   int nP=power(base,powr-1);
   return nP*base;

}

