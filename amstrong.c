#include <stdio.h>
#include <math.h>
int main() {
   int arms; 
   int check, rem, sum = 0,count=0,c1,r;
   scanf("%d",&arms);

   check = arms;
   c1=arms;
   

   while(check != 0) {
      rem = check % 10;
     count++;
      check = check / 10;
   }
      while(c1 != 0) {
      r = c1 % 10;
     sum=sum+pow(r,count);
      c1 = c1 / 10;
   }
if(sum==arms)
      printf("is an armstrong number.");
      else
       printf("not armstrong");
      
   return 0;
}
