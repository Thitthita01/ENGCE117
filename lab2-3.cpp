#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter, char str2[][10], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;
    int num ;
    explode( "I/Love/You", '/', out, &num ) ;
    return 0 ;
}//end function

void explode( char str1[], char splitter, char str2[][10], int *count ) {
    int len = strlen(str1);

    int j = 0 ;
    int k = 0 ;
    for ( int i = 0 ; i < len ; i++ ) {
        if ( str1[ i ] == splitter ) {
            str2[ k ][ j ] = '\0' ;
            j = 0 ;
            k++ ;
            continue ;
        }

        str2[ k ][ j ] = str1[ i ] ;
        j++ ;
    }

    *count = k + 1 ;

    // print out
    for ( int i = 0 ; i < *count ; i++ ) {
        printf( "str2[%d] = %s\n", i, str2[i] ) ;
    }
    printf( "count = %d\n", *count ) ;
}//end function
