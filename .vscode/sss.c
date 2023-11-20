#include <stdio.h>
int main()
{
    int a[2][3],c,b;
    
    printf("the array elements are:\n");
    for (c = 0; c < 2; c++) // rows
    {
        for (b = 0; b < 3; b++) // coloums
        {
            scanf("%d", &a[c][b]);
        }
    }
     for (c = 0; c < 2; c++) // rows
    {
        for (b = 0; b < 3; b++) // coloums
        {
            printf("%d ", a[c][b]);
        }
        printf("\n");
    }
    
    return 0;
}
