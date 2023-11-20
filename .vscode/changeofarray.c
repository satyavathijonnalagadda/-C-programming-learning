#include<stdio.h>
int main()
{
    int numbers[] = {35,45,55,65,75,85,95,100};
    numbers[0] = 98;
    printf("%d\n",numbers[0]);
    printf("%d\n", numbers[5]);
    printf("%d\n", numbers[6]);
    return 0;
}