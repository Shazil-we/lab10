#include <stdio.h>
struct Chocolate{
  char name[50];
  float weight;
  int calories;
  float price;
  char expirydate[30];
};
int main(){
  struct Chocolate MyFavChocolate[3];
  for(int i=0; i<3; i++){
    printf("\nEnter chocolate name: ");
    scanf("%s" , &MyFavChocolate[i].name);
    printf("\nEnter chocolate weight: ");
    scanf("%f" , &MyFavChocolate[i].weight);
    printf("\nEnter chocolate calories: ");
    scanf("%d" , &MyFavChocolate[i].calories);
    printf("\nEnter chocolate price: ");
    scanf("%f" , &MyFavChocolate[i].price);
    printf("\nEnter chocolate expiry date: ");
    scanf("%s" , &MyFavChocolate[i].expirydate);
  }
    for(int i=0; i<3; i++){
    printf("\n\n\nDetails For Chocolate %d" , i+1);
    printf("\nName: %s" , MyFavChocolate[i].name);
    printf("\nWeight: %d Kg" , MyFavChocolate[i].weight);
    printf("\nCalories: " , MyFavChocolate[i].calories);
    printf("\nPrice: $%f", MyFavChocolate[i].price);
    printf("\nExpiry Date: %s", MyFavChocolate[i].expirydate);
  }
}