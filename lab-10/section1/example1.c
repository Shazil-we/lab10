#include <stdio.h>
int factorial(int n);
int main(){
  int num =5 , fact =0;
  fact = factorial(num);
  printf("the factorial of %d is: %d "  , num , fact);
}
int factorial(int n){
  if(n == 1){
    return n;
  }else{
    n = n * factorial(n-1);
  }
}