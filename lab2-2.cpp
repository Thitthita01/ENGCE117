#include <stdio.h>
#include <string.h>

char* reverse( char str1[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;
    out = reverse( text ) ;
    printf( "%s", out ) ; // print out
    return 0 ;
}//end function

char* reverse( char str1[] ) {
    int len = strlen( str1 ) ;

    char *str2 ;
    str2 = new char[ len ] ;

    for ( int i = 0 ; i < len ; i++ ) {
        str2[len - 1 - i] = str1[i] ;
    }

    str2[ len ] = '\0' ;

    return str2 ;
}//end function
