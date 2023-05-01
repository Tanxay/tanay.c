#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>



struct student
{
 int ID;
int sem;
 char name;
};
void main()
{
 struct student st1[100];
st1[0].ID = 100;
 st1[0].sem = 3;
 st1[0].name = 'a';
 printf("id = %d \n",st1[0].ID);
 printf("semester = %d\n",st1[0].sem);
 printf("name = %d\n",st1[0].name);
}

