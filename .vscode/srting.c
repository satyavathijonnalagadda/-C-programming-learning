#include<stdio.h>
int main()
{
    char str[50];
    printf("enter the string:\n");
    scanf("%s",&str);
    printf("after the reverse of a string :%s",strrev(str));
    return 0;

}