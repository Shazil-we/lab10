#include <stdio.h>
void BubbleSort(int arr[], int n)
{
  int temp = 0;
  if(n ==1){
    return;
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      temp = arr[i];
      arr[i] = arr[i + 1];
      arr[i + 1] = temp;
    }
  }
  BubbleSort(arr, n - 1);
}
void printArr(int arr[10] , int n){
  if(n==0){
    printf(" %d " , arr[n]);
    return;
  }else{
    printArr(arr, n-1);
    printf(" %d " , arr[n]);
  }
}
int main()
{
  int arr[8] = {8, 4, 2, 5, 1, 3, 7, 6};
  printf("Original Array:");
  printArr(arr , 7);
  BubbleSort(arr, 8);
  printf("\nSorted Array  :");
  printArr(arr , 7);
}