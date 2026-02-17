#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num = get_int("Enter a number: ");

    if (num == 0)
    {
        printf("The number is zero.\n");
    }
    else if (num % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
}
