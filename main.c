#include <stdio.h>
#include <stdlib.h>

#include "assignment01.h"


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
    exercise01(item, amount, price);

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

    exercise04();

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
    printf("Result of math procedure: %d\n",result);

    int min = exercise06(a, b);
    printf("Min between %d and %d is %d\n", a, b, min);

    //endregion
    return 0;
}
