#include <stdio.h>
#include <limits.h>

#include "assignment03.h"

int isPrime( int n ) {
    if ( n < 2 ) return 0;
    if ( n == 2 ) return 1;
    if ( n % 2 == 0 ) return 0;
    for ( int i = 3; i * i <= n; i += 2 ) {
        if ( n % i == 0 || n % ( n/i ) == 0 )
            return 0;
    }
    return 1;
}

void decToHex ( int n ) {
    printf("%X", n) ;
}

int decToBi ( int n ) {
    int  p = 1, r, binary = 0;

    while ( n != 0 ) {
        r = n % 2;
        binary += r * p;
        p *= 10;
        n /= 2;
    }

    return binary;
}

// The largest number that can be contained in char / unsigned char
void exercise12( void ) {
    printf("\n#------------------------------------#\n");

    printf( "\nThe largest number that can be stored in a char is: %d\n"
            "The largest number that can be stored in an unsigned char is: %d\n",
            SCHAR_MAX, UCHAR_MAX);

    printf("\n#------------------------------------#\n");
}

void exercise13( int n ) {
    printf("\n#------------------------------------#\n");

    printf( "\nThe prime numbers from 1 to %d are: ", n );
    for ( int i = 1; i <= n; i++ ) {
        if ( isPrime( i ) )
            printf( "%d ", i );
    }

    printf("\n\n#------------------------------------#\n");
}

void exercise14( void ) {
    int a = 12;
    int b = 16;
    int c = 17;
    if ( ( ( c + 6 < b ) && ( b < a + 11 ) ) || ( a * 2 == b + 8 ) )
    {
        printf("I found it to be true! \n");
    } else {
        printf("I found it to be false! \n");
    }
}


// Size of an int / char
void exercise15( int n ) {
    printf("\n#------------------------------------#\n");

    int size = 0;
    char c = 1;
    while ( c != 0 ) {
        c = c << 1;
        //printf("%d ", c);
        size++;
    }
    printf( "The size of a char: %d\n", size );

    size = 0;
    int i = 1;
    while ( i != 0 ) {
        i = i << 1;
        //printf("%d ", i);
        size++;
    }
    printf( "The size of an int: %d", size );

    printf( "\nThe number: %d in hexadecimal: ", n );
    decToHex( n );

    printf( "\nThe number: %d in binary: %d", n, decToBi( n ) );

    printf("\n#------------------------------------#\n");
}

void exercise16( void ) {
    printf("\n#------------------------------------#\n");

    unsigned int n = 31;

    printf("Result: ");
    decToHex( n << 4 );

    printf("\n#------------------------------------#\n");
}
