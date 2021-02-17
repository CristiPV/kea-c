#include <stdio.h>
#include <stdlib.h>

#include "assignment01.h"
#include "assignment02.h"

int math (int a) {
    printf("\nCalculating %d times %d...\n", a, a);
    return a*a;
}

int main() {
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

    //region Exercise 07

    printf("\nExercise 07\n");

    struct Message message[MAXMSG] = {
            { {0xFF, 0, 0xFF, 0, 0, 0, 0}, 3 },
            { {0, 0, 0, 0, 0, 0, 0}, 3 }
    };

    exercise07(message);

    //endregion

    //region Exercise 08

    printf("\nExercise 08\n");

    exercise08(message);
    exercise07(message);

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

    exercise09( l2, l3 );

    //endregion

    //region 10

    printf("\nExercise 10\n");

    struct Locomotive trains[4] = {
            {0, "Thomas", 80, "North", true },
            {1, "Bertie", 59, "East", false },
            {2, "Henry", 20, "West", true },
            {3, "Diesel", 5, "South", true }
    };

    exercise10( trains, 7, 4 );

    //endregion

    return 0;
}
