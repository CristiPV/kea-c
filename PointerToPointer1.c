#include <stdio.h>

#include "assignment05.h"

void print( int *p1, int *p2 ) {
    int **pp = NULL;

    printf( "\nValue at p1: %d; value at p2: %d\n", *p1, *p2 );

    pp = &p1;

    printf( "\npp points to p1; value at pp: %d\n", **pp );

    pp = &p2;

    printf( "\npp points to p2; value at pp: %d\n", **pp );
}

int example1 () {
   int    var1,  var2 ;
   int   *ptr1 = &var1, *ptr2 = &var2 ;

   var1 = 1000;
   var2 = 2000;

   printf("\nValue of var1 = %d\n", var1 );
   printf("Value of var2 = %d\n", var2 );

   print( ptr1, ptr2 );

   return 0;
}
