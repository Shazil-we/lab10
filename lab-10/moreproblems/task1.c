#include <stdio.h>
void printArr(int arr[10] , int n){
  if(n==0){
    printf("%d" , arr[n]);
    return;
  }else{
    printArr(arr, n-1);
    printf("%d" , arr[n]);
  }
}
int main(){
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  printArr(arr , 9);
  return 0;
}