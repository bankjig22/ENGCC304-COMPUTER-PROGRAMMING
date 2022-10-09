#include <stdio.h>
#include <string.h>
int main() {
    char name[100] ;
    int count ;

    printf( " input : " ) ;
    gets(name) ;

    printf("result = :  ");
    count = strlen(name) ;
    int i = count ;
    while (i>=0) {
        printf("%c", name[i]) ;
        i-- ;
    }
    return 0 ;
}