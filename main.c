#include <stdio.h>
#include <math.h>
int prime ( int a )
{
    int b , i , r ;
    r = 0 ;
    for ( b = 2 ; b < sqrt ( a ) ; b++ )
    {
        i = a / b ;
        if ( a == b * i ) {
            r = 1 ;
            break ;
        }
    }
    return r ;
}
int main() {
    int n , number , a , b ;
    number = 0 ;
    n = 2 ;
    printf ( "前五个完全数是：" ) ;
    while ( number < 5 )
    {
        a = pow ( 2 , n ) - 1 ;
        b = pow ( 2 , n - 1 ) * a ;
        if ( prime ( a ) == 0 )
        {
            number++ ;
            if ( number == 5 )
                printf ( " %d " , b ) ;
            else
                printf ( " %d ," , b ) ;
        }
        n++ ;
    }
    return 0;
}