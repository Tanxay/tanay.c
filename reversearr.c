#include  <stdio.h>
#include <string.h>
int main(void)
{
    char str[10];
    scanf("%s",str);
    printf("Reverse the String:");
    int len = strlen(str);
    for(int i=len-1;i>=0;i--)
    { 
        printf("%c",str[i]);
    }  
    
    return 0;
}
