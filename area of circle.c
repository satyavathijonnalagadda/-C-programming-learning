// c programm to calculate area of a circle
#include <stdio.h>
#define PI 3.14
float area( float r);
int main()
{
    float r;
    printf("\nEnter the radius :");
    scanf("%f",&r);
    printf("Area of circle is:%f\n", area(r));
}
float area(float r)
{
    return(PI * r * r);
}

    
        
