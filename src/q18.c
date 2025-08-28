// Write a C expression that calculates the sum of the squares of three different numbers.
#include <stdio.h>
int main()
{
    int a, b, c, sum;
    printf("enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = (a * a) + (b * b) + (c * c);
    printf("the sum of squared numbers are: %d", sum);
    return 0;
}