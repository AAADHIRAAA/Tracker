#include <stdio.h>
int main() {
   int num, flag=0;
   scanf("%d",&num);
   for(int i=2; i<= num/2; ++i) {
      if(num%i == 0) {
         flag=1;
         break;
      }
   }
   if (num==1) {
      printf("Neither Prime nor Composite");
   }
   else {
       if (flag== 0)  printf("Prime");
        else  printf("Not prime");
      
   }
}
