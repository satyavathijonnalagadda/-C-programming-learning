#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the values of a and b :");
    scanf("%d%d",&a,&b);
    printf("enter the values of c and d :");
    scanf("%d%d",&c,&d);
    printf("\n %d%d",(a<d)&&(a!=b));
    printf("\n %d%d",(c<d)||(c>d));
    printf("\n %d%d", !(a==b),!(c==d));
    return 0;

}