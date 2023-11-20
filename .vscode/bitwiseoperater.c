#include <stdio.h>

int main()
 {

    int a = 5, b = 10;
    printf("Output = %d\n", a & b);
    printf("Output = %d\n", a | b);
    printf("Output = %d\n", a ^ b);
    printf("Output = %d\n", ~b);
    printf("Output = %d\n", a<<b);
    printf("Output = %d\n",a>>b);
    return 0;
}