#include <stdio.h>

int main() {
    int year ; 
    printf( "input year : ") ;
    scanf("%d",&year) ;

    if(year %4 == 0) {
        printf("Feb = 29 days") ;
    }else if (year %400 == 0) {
        printf("Feb = 29 days") ;
    }else if (year %100 == 0) {
        printf("Feb = 28 days") ;
    }else {
        printf("Feb = 28 days") ;
    }
      
    return 0 ; 
}