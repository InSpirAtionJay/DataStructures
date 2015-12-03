#include <stdio.h>
unsigned int Gcd( int M, int N )
{
    unsigned int Rem;
    while( N > 0 )
    {
        Rem = M % N;
        M = N;
        N = Rem;
    }
    return M;
}

void main()
{
    unsigned int a = Gcd( 64, 72 );
    printf( "%d\n", a );
}
