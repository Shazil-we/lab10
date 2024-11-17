#include <stdio.h>
#include <string.h>
struct Car
{
  char make[50];
  char model[50];
  int year;
  float price;
  int mileage;
};
int addCar(struct Car cars[], int count)
{
  printf("Enter make: ");
  scanf(" %[^\n]", cars[count].make);
  printf("Enter model: ");
  scanf(" %[^\n]", cars[count].model);
  printf("Enter year: ");
  scanf("%d", &cars[count].year);
  printf("Enter price: ");
  scanf("%f", &cars[count].price);
  printf("Enter mileage: ");
  scanf("%d", &cars[count].mileage);
  printf("Car added!\n");
  return count + 1;
}
void displayCars(struct Car cars[], int count)
{
  if (count == 0)
  {
    printf("No cars available.\n");
    return;
  }
  printf("\nList of Available Cars:\n");
  for (int i = 0; i < count; i++)
  {
    printf("%d. Make: %s, Model: %s, Year: %d, Price: $%.2f, Mileage: %d miles\n",
           i + 1, cars[i].make, cars[i].model, cars[i].year, cars[i].price, cars[i].mileage);
  }
}
void searchCar(struct Car cars[], int count, const char *keyword)
{
  int found = 0;
  printf("\nSearch Results:  '%s':\n", keyword);
  for (int i = 0; i < count; i++)
  {
    if (strstr(cars[i].make, keyword) != NULL || strstr(cars[i].model, keyword) != NULL)
    {
      printf("Make: %s, Model: %s, Year: %d, Price: $%.2f, Mileage: %d miles\n",
             cars[i].make, cars[i].model, cars[i].year, cars[i].price, cars[i].mileage);
      found = 1;
    }
  }

  if (!found)
  {
    printf("No cars found  '%s'.\n", keyword);
  }
}
int main()
{
  struct Car cars[100];
  int count = 0;
  int choice;
  while (1)
  {
    printf("\nCar Dealership Management\n");
    printf("1. Add a New Car\n");
    printf("2. Display All Cars\n");
    printf("3. Search Cars by Make or Model\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      count = addCar(cars, count);
      break;
    case 2:
      displayCars(cars, count);
      break;
    case 3:
    {
      char keyword[50];
      printf("Enter make or model to search: ");
      scanf(" %[^\n]", keyword);
      searchCar(cars, count, keyword);
      break;
    }
    case 4:
      return 0;
    default:
      printf("Invalid choice! Please try again.\n");
    }
  }
  return 0;
}
