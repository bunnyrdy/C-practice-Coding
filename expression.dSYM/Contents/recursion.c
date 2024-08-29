#include<stdio.h>
int rec ( int x )
{
int f ;
if ( x == 1 )
return ( 1 ) ;
else
f = x * rec ( x - 1 ) ;
return ( f ) ;
}
int main( )
{
int a, fact ;
a = 5;
fact = rec ( a ) ;
printf ( "Factorial value = %d", fact ) ;
}
