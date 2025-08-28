// Write a C program to prompt the user for their name and display a personalized greeting message.
#include <stdio.h>
int main()
{
    char name[20];
    printf("enter your name ");
    scanf("%s", name);
    printf("Hello %s how are you doing?", name);
    return 0;
}