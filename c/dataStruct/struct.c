#include <stdio.h>

typedef struct
{
    char name;
    char number;
}
person;
// orientação programada a objeto
int main(void)
{       //array name
    person peoople[3];

    peoople[0].name = 'Carter';
    peoople[0].number = '+1-617';

    peoople[1].name = 'David';
    peoople[1].number = '+1-695';

    peoople[2].name = 'Heynd';
    peoople[2].number = '+1-495';
}
