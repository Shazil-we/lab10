#include <stdio.h>
int Sum(int n){
  if(n==0){
    return n;
  }else{
    n = n%10 + Sum(n/10);
    return n;
  }
}
int main(){
  int n =12443;
  printf("%d" , Sum(n));
}