#include <stdio.h>
int CheckExtreme(int temps[] , int n){
  static int count =0;
  if(n==0){
    return count;
  }else{
    if(temps[n] > 40){
      count++;
    }
    CheckExtreme(temps , n-1);
  }
}
int main(){ 
  int len = 10 , count;
  int temps[10] = {37 , 48 , 21 , 60 , 26 , 12 ,50 , 32 ,62 , 99};
  count = CheckExtreme(temps , len-1);
  printf("%d" , count);
}