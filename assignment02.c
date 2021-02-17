#include <stdio.h>
#include <string.h>

#include "assignment02.h"

// Changing the direction of a locomotive
void changeDirection ( struct Locomotive *l, char direction[] ) {
    printf("Changing direction...\n");
    struct Locomotive lCopy = *l;
    strcpy(lCopy.direction, direction);
    *l = lCopy;
}

int compareLocomotives( struct Locomotive l1, struct Locomotive l2 ) {
    if ( l1.id != l2.id)
        return 0;
    if ( strcmp( l1.name, l2.name ) != 0 )
        return 0;
    if ( l1.speed != l2.speed )
        return 0;
    if ( strcmp( l1.direction, l2.direction ) != 0 )
        return 0;
    if ( l1.lightsOn != l2.lightsOn )
        return 0;
    return 1;
}

// Printing out the contents of the struct
void exercise07( struct Message message[] ) {
    printf("\n#------------------------------------#\n");
    for ( int i = 0; i < MAXMSG; i ++ ) {
        printf( "\nMessage No.%d\nData: ", ( i + 1 ) );
        for ( int j = 0; j < strlen(message[i].data); j ++ ) {
            printf( "%d ", message[i].data[j] );
        }
        printf("\nLen: %d\n", message[i].len);
    }
    printf("\n#------------------------------------#\n");
};

//Turning off the lights of the locomotive
void exercise08 ( struct Message message[] ) {
    message[1].data[1] = 128;
};

void exercise09 ( struct Locomotive l1, struct Locomotive l2 ) {
    printf("\n#------------------------------------#\n");
    printf("\nL1's direction: %s\n", l1.direction);
    changeDirection(&l1, "East");
    printf("L1's direction: %s\n", l1.direction);
    printf( "Comparing the locomotives: %d", compareLocomotives(l1, l2));
    printf("\n#------------------------------------#\n");
};

void exercise10( struct Locomotive trains[], int iterations, int amountOfTrains ) {
    printf("\n#------------------------------------#\n");
    for (int i = 0; i < iterations; i ++) {
        printf("\nLocomotive: %s\n", trains[i%amountOfTrains].name);
        trains[i%amountOfTrains].lightsOn = !trains[i%amountOfTrains].lightsOn;
        if (trains[i%amountOfTrains].lightsOn) {
            printf("Lights: on\n");
        } else {
            printf("Lights: off\n");
        }
    }
    printf("\n#------------------------------------#\n");
};