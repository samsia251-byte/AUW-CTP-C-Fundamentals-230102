#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int value[5];

    for (int i = 0; i < 5; i++)
    {
        value[i] = get_int("Enter value %d: ", i + 1);
    }
    int largest = value[0];

    for (int i = 1; i < 5; i++)
    {
        if (value[i] > largest)
        {
            largest = value[i];
        }
    }
    printf("Largest = %d\n", largest);
}
