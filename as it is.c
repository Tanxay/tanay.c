#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
 int a;
 float b;
 char c;
 char d[30];

 printf("Enter Integer Value \n");
 scanf("%d",&a);
 printf("%d \n",a);

 printf("Enter Deimal Value \n");
 scanf("%f",&b);
 printf("%f \n",b);
 printf("Enter Character Value \n ");
 scanf(" %c",&c);
 printf("%c\n",c);

 printf("Enter String Value \n");
 scanf("%s", d);
 printf("%s",d);
}
