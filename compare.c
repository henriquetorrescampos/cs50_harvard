#include <stdio.h>

int main(void){
    int x;
    int y;

    printf("What's x ? ");
    scanf("%d", &x);
    printf("What's yd? ");
    scanf("%d", &y);

    if (x < y){
        printf("x is less than y\n");
    }
    else if (x > y){
        printf("x is higher than y\n");
    }
    else{
        printf("x is equal to y\n");
    }
}