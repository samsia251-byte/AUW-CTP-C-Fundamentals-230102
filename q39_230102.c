#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int value[5];
    int sum = 0;
    float average;
    for (int i = 0; i < 5; i++)
    {
        value[i] = get_int("Enter value %d: ", i + 1);
    }
    for (int i = 0; i < 5; i++)
    {
        sum += value[i];
    }
    average = sum / 5.0;
    printf("Average = %.2f\n", average);
}
