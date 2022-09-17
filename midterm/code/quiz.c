#include <stdio.h>
#include <string.h>

struct employee {
    char name [100] ;
    float salary ;
    int duration ;
    
}typedef emp;


int checkYN (char,int,int, emp[]) ;
int inputDT (int, emp[]) ;
void average (int, emp[]) ;
void mostmoney(int, emp[]) ;

int main() {
    emp em[100] ;
    char YN ;
    int i = 0 ;
    int check = 1 ;
    while (check){
        printf(" Do you want to Enter Employee infomation (y/n) " ) ;
        scanf (" %c", &YN) ;
        check = checkYN (YN,i,check,em) ;
        i++ ;
    }
    average(i,em) ;
    mostmoney(i,em) ;
    return 0 ;
}

int checkYN (char YN, int i,int check, emp em[] ) {
    switch (YN) {
    case 'y':
        inputDT(i,em) ;        
        return 1 ;
        break;    
    case 'n' :
        return 0 ;
  }
}

int inputDT (int i, emp em[]) {
    printf( "Employee Name : " );
    getchar() ;
    gets(em[i].name);
    printf(" salary (Bath/Month) : " ) ;
    scanf("%f", &em[i].salary ) ;
    printf( "Duration (Year) : " );
    scanf( "%d", &em[i].duration ) ;
}

void average (int i, emp em[] ) {
    int c = 0 ;
    float avg = 0 ;
    float sum  = 0 ;
    while ( c < i ) {
        sum = sum + em[ c ].salary ;
        avg = sum / c ;
        c++;
    }
    printf( "\nAverage of Salary : %.2f bath\n", avg ) ;
    printf( "Payment of every month : %.2f bath\n", sum ) ;
}

void mostmoney(int i, emp em[]) {
    int max = -9999 ;
    int money = 0 ;
    int c = 0 ;
    int moneycheck = 0 ;
    int most = -1 ;
    while ( c < i ) {
        money = em[ c ]. salary ;
        max = moneycheck < money ;
        switch (max) {
        case 1 :
            most = c ;
            moneycheck = money ;
            break;
        }
        c++ ;
    }
    printf( "** Most duration in this business **\n" ) ;
    printf( "Name: %s (%d Years)\n", em[most].name, em[most].duration ) ;
    printf( "Salary: %.2f bath\n", em[most].salary ) ;
}