#include <stdio.h>
#include <cs50.h>

// Function declaration
void check_even_odd(int num);

int main(void)
{
    int number = get_int("Enter a number: ");
    check_even_odd(number);

    return 0;
}
void check_even_odd(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is Even\n", num);
    }
    else
    {
        printf("%d is Odd\n", num);
    }
}
