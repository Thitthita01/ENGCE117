#include <stdio.h>

int* GetSet( int * ) ;

int main() {
    int *data, num ;

    printf("1. %p\n", data) ;
    data = GetSet( &num ) ;
    printf("3. %p\n", data) ;

    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[i] ) ;
    }

    return 0 ;
}//end function

int* GetSet( int *num ) {
    scanf( "%d", num ) ;

    int *data ;
    data = new int[ *num ] ;

    for( int i = 0 ; i < *num ; i++ ) {
        scanf( "%d", &data[i] ) ;
    }//end for

    printf("2. %p\n", data) ;

    return data ;
}//end function
