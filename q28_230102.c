#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num = get_int("Enter a number: ");

    if (num >= 1 && num <= 100)
    {
        printf("The number is within the range 1 to 100.\n");
    }
    else
    {
        printf("The number is not in the range 1 to 100.\n");
    }
}
