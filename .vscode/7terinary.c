#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    (marks>35)?(printf("passed ")):printf(("not passed"));
    return 0;
}