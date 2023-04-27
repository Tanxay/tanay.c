// Online C compiler to run C program online
#include<stdio.h>
int main()
{
    int a,b,n;
    printf("enter the marks: ");
    scanf("%d",&n);
    
    if(n>50 && n<=100){
    printf("pass");
    }
    else if(n<50 && n>0)
    {
    printf(" fail");
    }
    else {
    printf("invalid");
    }
    return 0;
}



   
