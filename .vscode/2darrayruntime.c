#include<stdio.h>
int main()
{
    int a, b;
    int array[2][3]={10,20,30,40,50,60};
    printf("the array elements are:\n");
    for (a = 0; a < 2; a++)//rows
    {
        for (b = 0; b < 3; b++)//coloums
        {
            printf("%d \t", array[a][b]);
        }
        printf("\n");
    }
    return 0;
}
