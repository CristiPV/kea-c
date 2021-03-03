#include <stdio.h>
#include <stdlib.h>

#include "assignment01.h"
#include "assignment02.h"
#include "assignment03.h"
#include "assignment04.h"
#include "assignment05.h"

int math (int a) {
    printf("\nCalculating %d times %d...\n", a, a);
    return a*a;
}

int main() {
    //region Assignment 01

    //region Exercise 01

    printf("\nExercise 01\n");

    int amount = 41112;
    char item[] = {"Lego Blocks"};
    float price = 11.48f;
    //exercise01(item, amount, price);
    printf("\nSkipped\n");

    //endregion

    //region Exercise 02

    printf("\nExercise 02\n");

    //exercise02();
    printf("\nSkipped\n");

    //endregion

    //region Exercise 03

    printf("\nExercise 03\n");

    //exercise03();
    printf("\nSkipped\n");

    //endregion

    //region Exercise 04

    printf("\nExercise 04\n");

    //exercise04();
    printf("\nSkipped\n");

    //endregion

    //region Exercise 05

    printf("\nExercise 05\n");

    //exercise05();
    printf("\nSkipped\n");

    //endregion

    //region Exercise 06

    printf("\nExercise 06\n");

    int a = 2, b = 4;

    int result = math(a);
    //printf("Result of math procedure: %d\n",result);

    int min = exercise06(a, b);
    //printf("Min between %d and %d is %d\n", a, b, min);
    printf("\nSkipped\n");

    //endregion

    //endregion

    //region Assignment 02

    //region Exercise 07

    printf("\nExercise 07\n");

    struct Message message[MAXMSG] = {
            { {0xFF, 0, 0xFF, 0, 0, 0, 0}, 3 },
            { {0, 0, 0, 0, 0, 0, 0}, 3 }
    };

    //exercise07(message);
    printf("\nSkipped\n");

    //endregion

    //region Exercise 08

    printf("\nExercise 08\n");

    //exercise08(message);
    //exercise07(message);
    printf("\nSkipped\n");

    //endregion

    //region Exercise 09

    printf("\nExercise 09\n");

    struct Locomotive l1 = {
            0, "Thomas", 49, "West", false
    };
    struct Locomotive l2 = {
            1, "Bertie", 59, "South-North", true
    };
    struct Locomotive l3 = {
            1, "Bertie", 59, "East", true
    };

    //exercise09( l2, l3 );
    printf("\nSkipped\n");

    //endregion

    //region Exercise 10

    printf("\nExercise 10\n");

    struct Locomotive trains[4] = {
            {0, "Thomas", 80, "North", true },
            {1, "Bertie", 59, "East", false },
            {2, "Henry", 20, "West", true },
            {3, "Diesel", 5, "South", true }
    };

    //exercise10( trains, 7, 4 );
    printf("\nSkipped\n");

    //endregion

    //endregion

    //region Assignment 03

    //region Exercise 12

    printf("\nExercise 12\n");

    //exercise12();
    printf("\nSkipped\n");

    //endregion

    //region Exercise 13

    printf("\nExercise 13\n");

    int limit = 100;
    //exercise13( limit );
    printf("\nSkipped\n");

    //endregion

    //region Exercise 14

    printf("\nExercise 14\n");

    //exercise14();
    printf("\nSkipped\n");

    //endregion

    //region Exercise 15

    printf( "\nExercise 15\n" );

    int number = 11;
    //exercise15( number );
    printf("\nSkipped\n");

    //endregion

    //region Exercise 16

    printf("\nExercise 16\n");

    //exercise16();
    printf("\nSkipped\n");

    //endregion

    //endregion

    //region Assignment 04

    //region Exercise 17

    printf("\nExercise 17\n");

    //exercise17();
    printf("\nSkipped\n");

    //endregion

    //region Exercise 18 and 19

    printf( "\nExercise 18 and 19\n" );

    //exercise18And19();
    printf("\nSkipped\n");

    //endregion

    //region Exercise 20

    printf( "\nExercise 20\n" );

    //exercise20();
    printf("\nSkipped\n");

    //endregion

    //region Exercise 21 and 22

    printf( "\nExercise 21 and 22\n" );

    int position = 23;

    //exercise21and22( position );
    printf("\nSkipped\n");

    //endregion

    //endregion

    //region Assignment 05

    //region Exercise 23

    printf( "\nExercise 23\n" );

    example1();

    //endregion

    //region Exercise 24

    printf( "\nExercise 24\n" );

    example2();

    //endregion

    //endregion

    return 0;
}
