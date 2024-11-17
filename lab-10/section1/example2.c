#include <stdio.h>
int Sum(int n){
  if(n==0){
    return n;
  }else{
    n = n + Sum(n-1);
    return n;
  }
}
int main(){
  int sum =0, n=5;
  sum = Sum(n);
  printf("%d" , sum);
}
