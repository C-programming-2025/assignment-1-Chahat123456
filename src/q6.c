// Write a C program to calculate the area of a rectangle. Prompt the user to enter the length and width, and display the result.
#include <stdio.h>
int main()
{
    int length, breadth, area;
    printf("enter the length and breadth of the given rectangle: ");
    scanf("%d %d", &length, &breadth);
    area = length * breadth;
    printf("the area is: %d", area);
    return 0;
}