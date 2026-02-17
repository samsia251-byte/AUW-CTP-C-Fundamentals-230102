#include <stdio.h>
#include <cs50.h>

int max_of_two(int a, int b);

int main(void)
{
    int num1 = get_int("Enter first number: ");
    int num2 = get_int("Enter second number: ");

    int max = max_of_two(num1, num2);

    printf("Maximum = %d\n", max);

    return 0;
}
int max_of_two(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
