#include <stdio.h>
void Hanoi( char A, char B, char C, int n ){
    if ( n == 1 ) printf("%c-->%c\n", A, C );
    else {
    Hanoi( A, C, B, n-1 );
    printf( "%c-->%c\n", A, C );
    Hanoi( B, A, C, n-1 );
    }
}
void main (){
    char a = 'A', b = 'B', c= 'C';
    Hanoi( a, b, c, 5 );
}
