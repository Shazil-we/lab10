#include <stdio.h>
int fibonacci(int n){
  if(n<=1){
    return n;
  }else{
    return fibonacci(n-1) + fibonacci(n-2);
  }
}
int main(){
  int n=5;
  for(int i =0; i<=5; i++){
    printf(" %d " , fibonacci(i));
  }
  return 0;
}