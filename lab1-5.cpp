#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    GetMatrix( data, &m, &n ) ;

    for ( int i = 0 ; i < m ; i++ ) {
        for ( int j = 0 ; j < n ; j++ ) {
            printf( "%d ", data[i * n + j] ) ;
        }
        printf( "\n" ) ;
    }

    return 0 ;
}//end function

void GetMatrix( int *row, int *col ) {
    printf("rows: ");
    scanf( "%d", row );
    printf("col: ");
    scanf( "%d", col );

    int size = (*row) * (*col) ;
    value = new int[ size ] ;
    printf("size: %d\n", size);

    for( int i = 0 ; i < size ; i++ ) {
        scanf( "%d", &value[i] ) ;
    }
    
}
