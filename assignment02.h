#ifndef KEA_C_ASSIGNMENT02_H
#define KEA_C_ASSIGNMENT02_H

#include <stdbool.h>

#define MAXMSG 2

struct Message {
    unsigned char data[7];
    unsigned char len;
};

struct Locomotive {
    int id;
    char name[20];
    int speed;
    char direction[20];
    bool lightsOn;
};

void exercise07( struct Message message[] );

void exercise08( struct Message message[] );

void exercise09( struct Locomotive l1, struct Locomotive l2 );

void exercise10( struct Locomotive trains[], int iterations, int amountOfTrains );

#endif //KEA_C_ASSIGNMENT02_H
