// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, result;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    result = (sqrt(a + b));
    printf("result: %d", result);
    return 0;
}