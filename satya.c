#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
        int c=a*b;
        int b=c/d;
        printf("\n enter the value of a :");
        scanf(" %d",&a);
        printf("\n enter the value of b :");
        scanf("%d",&b);
        printf("\n enter the value of c:");
        scanf("%d", &d);
        printf("(a*b)is %d\n",(a*b));
        printf("c/d %d \n",c/d);
        return 0;
}

