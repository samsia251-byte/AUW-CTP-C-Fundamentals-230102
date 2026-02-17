#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char names[3][20];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }
    printf("Names:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", names[i]);
    }
}
