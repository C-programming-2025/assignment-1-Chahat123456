// Given three variables a, b, and c, write an expression that checks if a is equal to b and b is not equal to c.
#include <stdio.h>
int main()
{
    int a, b, c, checker;
    printf("enter 3 different numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    checker = a == b && b != c;
    printf("result: %d", checker);
    return 0;
}