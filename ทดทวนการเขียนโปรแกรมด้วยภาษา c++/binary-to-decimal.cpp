#include <iostream>

int main ( ) {
    int kim , j = 0 , t = 1;
    printf("input : ") ;
    scanf("%d",&kim) ;

    while (kim)
    {
        j += (kim%10) * t ;
        t = t * 2 ;
        kim /= 10 ;
        
    }
    printf("Decimal: %d",j) ;

    return 0;
}
