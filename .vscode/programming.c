//programm on relational operaters
A relational operaters is used in this progra
#include<stdio.h>
int main()
{
    int a,b,c,d;//the variables are declared to 
        a=10;//
        b=20;
        c=30;
        d=40;
    printf("sum of a and b %d\n",a==b);//Checks two operands a,b are equal or not.If yes, then the condition becomes true.
    printf("sum of a and b %d\n",a>b);//the operand a is greater than operand b.If yes, then the condition becomes true.
    printf("sum of c & d %d\n",c<d);//the operand c is less than the operand d.If yes, then the condition becomes true.
    printf("sum of b & c %d\n",b>=c);//Checks the operand b is greater than or equal to the operand c.If yes, then the condition becomes true.
    printf("sum of d & b%d\n",b==d);//the values of two operands are equal or not.If yes, then the condition becomes true.
    printf("sum of a & d %d\n",(a>=d));//the operand a is greater than or equal to the operand.If yes, then the condition becomes true.
    printf("sum of b & d %d\n",(b!=d));//the values of two operands are equal or not.If the values are not equal, then the condition becomes true.
    printf("sum of c & a %d\n",(c<=a));//the operand c is less than or equal to operand a.If yes, then the condition becomes true.
    return 0;

}