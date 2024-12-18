#include <stdio.h>
#include <string.h>

void GetSet( int [], int * ) ;//ประกาศใช้ฟังก์ชัน getset prototype

int main() {
    int *data, num ;
    GetSet( data, &num ) ;

    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[i] ) ;
    }

    return 0 ;
}//end function

void GetSet( int data[], int *num ) {
    scanf( "%d", num ) ;
    data = new int[ *num ] ;

    for( int i = 0 ; i < *num ; i++ ) {
        scanf( "%d", &data[i] ) ;
    }
}