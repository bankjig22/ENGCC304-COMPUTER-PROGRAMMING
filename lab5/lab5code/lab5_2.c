#include <stdio.h>

int main () {
    int years ;
    int check ;
    printf("input years : ") ;
    scanf("%d",&years) ;

    check=((years%4==0)&&((years%400==0)||(years%100!=0)));

    switch (check) {
    case 1:
        printf("Feb = 29 days") ;
        break;    
    case 0:
        printf("Feb = 28 days") ;   
        break;
    default:
        printf("Feb = 28 days") ;
        break;
    }

    return 0 ;
}