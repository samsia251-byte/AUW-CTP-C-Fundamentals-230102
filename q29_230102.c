#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("Enter first number: ");
    int b = get_int("Enter second number: ");

    if (a > b)
    {
        printf("%d is the largest number.\n", a);
    }
    else if (b > a)
    {
        printf("%d is the largest number.\n", b);
    }
    else
    {
        printf("Both numbers are equal.\n");
    }
}
