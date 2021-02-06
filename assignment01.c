#include <stdio.h>

#include "assignment01.h"

// Calculating Moms
void exercise01(char item[], int amount, float price) {
    float total,totalMoms,moms;
    total = price * (float)amount;
    moms = (float)amount / 4.0f;
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