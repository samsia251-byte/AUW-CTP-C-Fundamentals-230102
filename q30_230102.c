#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("Enter first number: ");
    int b = get_int("Enter second number: ");
    int c = get_int("Enter third number: ");

    if (a == b && b == c)
    {
        printf("All three numbers are equal.\n");
    }
    else if (a >= b && a >= c)
    {
        printf("%d is the largest number.\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is the largest number.\n", b);
    }
    else
    {
        printf("%d is the largest number.\n", c);
    }
}
