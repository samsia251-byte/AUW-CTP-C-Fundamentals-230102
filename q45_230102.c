#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int value[5];
    for (int i = 0; i < 5; i++)
    {
        value[i] = get_int("Enter value %d: ", i + 1);
    }
    printf("Reverse Order: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", value[i]);
    }

    printf("\n");
}
