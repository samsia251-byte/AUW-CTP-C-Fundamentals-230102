#include <stdio.h>
#include <cs50.h>

int add(int a, int b);

int main(void)
{
    int num1 = get_int("Enter first number: ");
    int num2 = get_int("Enter second number: ");
    int sum = add(num1, num2);

    printf("Sum = %d\n", sum);
    return 0;
}
int add(int a, int b)
{
    return a + b;
}
