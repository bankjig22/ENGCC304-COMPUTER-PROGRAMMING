#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Infomation {
    char name [100] ;
    char date [100] ;
    int age ;
    int year ;
}typedef info ;

int open ( info[] ) ;
void age (info[], int) ;
int min_max_info (info[], int) ;
int show (info[], int, int) ;

void main () {
    info input_file [100] ;
    int i = 0 ;
    int total = open (input_file) ;
    show (input_file, i, total) ;
}

int open ( info input_file[] ) {
    int i = 0 ;
    char n1 [100], n2[100], n3[100], count[100] ;
    FILE *fp ;
    fp = fopen ("a.txt", "r" ) ;
    fscanf(fp, "%s  %s  %s", n1, n2, n3) ;
    while( fscanf( fp,"%s  %s  %s\n", count, &input_file[i].name, &input_file[i].date) != EOF )  {
        i++ ;
    }//end while
    fclose(fp) ;
    return i ;
}//end function

void age ( info bd[], int i ) {
    int year = 2018, month = 6, day = 21 ;
    int sum = 0 ;
    int num = 0 ;
    int ans = 0 ;
    char *token ;
    token = strtok( bd[i].date, "-" ) ;
    while( token != NULL) {
        num = atoi( token ) ;
        if ( sum == 0 ) {
            bd [i].age = year - num ;
        }else if( sum == 1) {
            ans = abs( month - num) ;
            bd[i].year = ans ;
            if(month < num) {
                bd[i].age-- ;
                bd[i].year = 12 + month - num ;
            }//end if
        }else if(sum == 2 ) {
            if (day < num ) {
                bd[i].year-- ;
            }//end if
        }//end if
        token = strtok(NULL,"-") ;
        sum++ ;   
    }//end while
}//end function

int min_max_info (info bd[], int total) {
    int sum = 0 ;
    int min = 0 ;
    int max = 0 ;
    int age_min = 99999 ;
    int age_max = -99999 ;
    int i = 0 ;
    while( i < total) {
        sum = bd[i].age + bd[i].year ;
        if( sum > age_max) {
            max = i ;
            age_max = sum ;
        }else if( sum < age_min) {
            min = i ;
            age_min = sum ;
        }//end if
        i++ ;
    }//end while
    printf( "------------------------------\n" ) ;
    printf( "Max : %s [ %d Years, %d Months ]\n", bd[max].name, bd[max].age, bd[max].year  ) ;
    printf( "Min : %s [ %d Years, %d Months ]\n", bd[min].name, bd[min].age, bd[min].year  ) ;
     printf( "------------------------------\n" ) ;
    return 0 ;
}//end function

int show (info bd[], int i, int total) {
    for (i = 0; i < total; i++){
        age (bd, i) ;
        printf( "%s %d Years, %d months\n ", bd[i].name, bd[i].age, bd[i].year ) ;
    }
    min_max_info(bd, total) ;
}