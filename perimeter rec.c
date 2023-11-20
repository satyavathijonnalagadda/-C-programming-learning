 
//c programm with perimeter of rectangle values 
#include <stdio.h>
int area(int l,int b);
int main()
{
int l;
printf("enter the value of l:\n");
scanf("%d",&l);
int b;
printf("enter the value of b:\n");
scanf("%d",&b);
printf("the perimeter of rectangle is %d",area(l,b));
}
int area(int l,int b)    
{
    return (2*(l+b));
    }