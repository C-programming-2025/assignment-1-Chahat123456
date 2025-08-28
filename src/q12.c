
#include <stdio.h>

int main()
{
    int a, b, c, result;
    printf("enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    result = a > b && c != 0;
    printf("the result is: %u", result);
    return 0;
}