#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float number = get_float("Enter a number: ");
    printf("The entered value is: %.2f\n", number);
}
