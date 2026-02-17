#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int value[5];
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        value[i] = get_int("Enter value %d: ", i + 1);
    }
    for (int i = 0; i < 5; i++)
    {
        if (value[i] > 0)
        {
            count++;
        }
    }
    printf("Positive Numbers Count = %d\n", count);
}
