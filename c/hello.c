#include <stdio.h>

int main(void) 
{
    char name[100];
    int age = 25;
    float height = 1.70;

    printf("Hello, what's your name? ");
    scanf("%99s", name);
    scanf("Hello, %s\n", name);
    printf("You are %i years old\n", age);
    printf("Your height is %.2f meters\n", height);
}
