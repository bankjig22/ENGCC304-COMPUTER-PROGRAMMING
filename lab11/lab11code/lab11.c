#include <stdio.h>

char DetectOperator(char []) ;
int GetResult (int, int) ;

int main() {
  char op [100] ;
  int num1 = op[0] ;
  int num2 = op[2] ;
  int ans ;
  printf("input : " ) ;
  scanf("%d %c %d",&op[0], &op[1] ,&op[2]) ;
  DetectOperator( op ) ;
  return 0 ;
}

char DetectOperator(char op []) {
  int num1 = op[0] ;
  int num2 = op[2] ;
  int ans ;
  switch (op[1]) {
    case '+' :
      ans = num1 + num2 ;
      GetResult (num1, ans) ;
      break;
    case '-' :
      ans = num1 - num2 ;
      GetResult (num1, ans) ;
      break;
    case '*' :
      ans = num1 * num2 ;
      GetResult (num1, ans) ;
      break;
    case '/' :
      ans = num1 / num2 ;
      GetResult (num1, ans) ;
      break;
  }
}  

int GetResult (int num1, int ans) {
  printf("result = %d ", ans) ;
  return ans ;
}