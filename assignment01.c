#include <stdio.h>

#include "assignment01.h"

// Calculating Moms
void exercise01(char item[], int amount, float price) {
    float total,totalMoms,moms;
    total = price * (float)amount;
    moms = (float)total / 4.0f;
    totalMoms = total + moms;

    printf("\n#------------------------------------#\n");
    printf("> Item: %s\n"
           "> Number: %d\n"
           "> Price: %10.2f\n"
           "> Total cost without moms: %10.2f\n"
           "> Moms: %10.2f\n"
           "> Total price all inclusive: %10.2f",item, amount, price, total, moms, totalMoms);
    printf("\n#------------------------------------#\n");
};

// Using scanf()
void exercise02(void) {
    int inputNumber;
    char inputChar, inputString[50];

    printf("\n#------------------------------------#\n");
    printf("Type a Number, a Character and a String: \n");
    scanf("%d %c %s", &inputNumber, &inputChar, inputString);
    printf("Your input was: \n"
           "> Number : %d\n"
           "> Character : %c\n"
           "> String : %s", inputNumber, inputChar, inputString);
    printf("\n#------------------------------------#\n");
};

// Other inputs
void exercise03(void) {
    char c, string[50];

    printf("\n#------------------------------------#\n");
    printf("Type a string : \n");
    // Emptying the buffer
    getchar();
    gets(string);
    printf ("String: %s\n", string);
    printf("Type a character : \n");
    c = getchar();
    printf("Character: %c\n", c);
    printf("\n#------------------------------------#\n");
};

// Loops
void exercise04(void) {
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int length = sizeof(days) / sizeof(days[0]);
    int i;

    printf("\nUsing a for loop\n");
    printf("\n#------------------------------------#\n");
    for (i = 0; i < length; i ++) {
        printf("Month nr.%d contains %d days.\n", i+1, days[i]);
    }
    printf("\n#------------------------------------#\n");

    printf("\nUsing a while loop\n");
    printf("\n#------------------------------------#\n");
    i = 0;
    while(i < length) {
        printf("Month nr.%d contains %d days.\n", i + 1, days[i]);
        i++;
    };
    printf("\n#------------------------------------#\n");

    printf("\nUsing a do-while loop\n");
    printf("\n#------------------------------------#\n");
    i = 0;
    do {
        printf("Month nr.%d contains %d days.\n", i + 1, days[i]);
        i++;
    }while(i < length);
    printf("\n#------------------------------------#\n");
};

// if-else & switch
void exercise05(void) {
    char c;

    printf("\nif-else\n");
    printf("\n#------------------------------------#\n");
    printf("Type a character: \n");
    c = getchar();
    getchar();
    if (c == 'a' || c == 'A') {
        printf("Apple\n");
    } else if (c == 'b' || c == 'B') {
        printf("Banana\n");
    } else if (c == 'c' || c == 'C') {
        printf("Cherry\n");
    } else if (c == 'd' || c == 'D') {
        printf("Date\n");
    } else if (c == 'e' || c == 'E') {
        printf("Elderberry\n");
    } else {
        printf("I don't know any fruit with a %c.\n", c);
    }
    printf("\n#------------------------------------#\n");
};