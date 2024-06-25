#include <stdio.h>

int main(void)
{
    char agree;

    printf("Do you agree? ");
    scanf(" %c", &agree);

    if (agree == 'y' || agree == 'Y') // || or, 
    {
        printf("Agreed.\n");
    }
    else if (agree == 'n' || agree == 'N')
    {
        printf("Not agreed.\n");
    }
}