#include <stdio.h>
#include <string.h>

int main(void)
{
    char array[] = {"battle", "boot", "cannon", "iron"};
    char s;

    printf("Digite uma palavra: ");
    scanf("%c", &s);

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(array[i], s) == 0)
        {
            printf("Found it\n");
        }
    }
    printf("Not found it\n");
    return 1;
}