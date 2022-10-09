#include <stdio.h>
#include <string.h>

int main () {
    char name[20];
    printf("input name : ") ;

    gets(name) ;
    printf("result : ");
    
    for( int i = strlen(name); i>=0; i--) {
        printf("%c",name[i]) ;
    }
    
    return 0 ;
}