#include <iostream>

int main ( ) {
    int com , j , t = 1 ;
    printf("input : ") ;
    scanf("%d",&com) ;
    while (com)
    {
        j += (com % 2) * t ;
        t *= 10 ;
        com /= 2 ;
    }
    printf("Binary : %d",j) ;

    return 0;
}
