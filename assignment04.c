#include <stdio.h>

#include "assignment04.h"

void swap( int *a, int *b ) {
    int temp = *a;
    *b = *a;
    *b = temp;
}

// Printing the value and the address of some variables
void exercise17( void ) {
    printf("\n#------------------------------------#\n");
    int x = 10, y = 20, *ptr_x = NULL, *ptr_y = NULL;
    ptr_x = &x;
    ptr_y = &y;

    printf( "\nThe value and address of X: %d, %d", x, ptr_x );
    printf( "\nThe value and address of X: %d, %d\n", y, ptr_y );

    printf("\n#------------------------------------#\n");
}

// Bubble sort
void exercise18And19( void ) {
    printf("\n\n#------------------------------------#\n");

    int i, j, n;
    int ar[] = { 7, 3, 9, 2, 11 }, *arp = NULL;
    arp = ar;
    printf( "Array before sort:\n\n" );
    for( i=0 ; i<5 ; i++ )
        printf( "ar[%d]=%d\n",i, ar[i] );

    n = 5; /* number of items in sort array */
    for ( i=0; i<n-1; i++ )
    {
        for( j=0; j<n-1; j++)
        {
            if ( *ar+j > *ar+(j+1) )
                swap( &ar[j], &ar[j+1] );
        }
    }

    printf( "\nArray after sort:\n\n" );
    for( i=0; i<5; i++ )
        printf( "ar[%d]=%d\n", i, *arp+i );

    printf("\n#------------------------------------#\n");
}

void exercise20 ( void ) {
    printf("\n#------------------------------------#\n");

    int array[101], *p = NULL;
    p = array;

    for ( int i = 1; i <= 100; i++ ) {
        *p  = i;
        p++;
    }

    printf( "\nThe array: \n" );

    for ( int i = 0; i < 100; i++ ) {
        if ( i % 10 == 0 ) {
            printf ( "\n" );
        }
        printf( "%d ", array[i] );
    }

    printf("\n\n#------------------------------------#\n");
}

void exercise21and22 ( int position ) {
    int a1[] = {1, 2, 3}, a2[] = {4, 5, 6}, a3[] = {8, 9, 10}, a4[] = {11, 12, 13}, a5[] = {14, 15, 16};
    int a6[] = {17, 18, 19}, a7[] = {20, 21, 22}, a8[] = {23, 24, 25}, a9[] = {26, 27, 28};
    int a10[] = {29, 30, 31};

    int *p1 = a1, *p2 = a2, *p3 = a3, *p4 = a4, *p5 = a5;
    int *p6 = a6, *p7 = a7, *p8 = a8, *p9 = a9, *p10 = a10;

    int *array[10];

    array[0] = p1;
    array[1] = p2;
    array[2] = p3;
    array[3] = p4;
    array[4] = p5;
    array[5] = p6;
    array[6] = p7;
    array[7] = p8;
    array[8] = p9;
    array[9] = p10;

    // Printing the array of pointers ( that also point to arrays )
    for ( int i = 0; i < 10; i++ ) {
        printf ("\n");
        for ( int j = 0; j < 3; j++ ) {
            printf("%d ", array[i][j]);
        }
    }

    int **p = array;
    p += position % 10;

    printf( "\nValues at the position %d is: ", position);
    for ( int i = 0; i < 3; i++ ) {
        printf( "%d ", **p );
        *p += 1;
    }
}