#include <stdio.h>
struct flight{
  int flight_id;
  char departure_city[50];
  char destination_city[50];
  char date[50];
  int a_seats;
};
void BookSeat(struct flight f[3]){
  int input;
  printf("choose flight:");
  for(int i=0; i<3; i++){
    printf("\n%d. %s to %s on %s\nAvailable seats: %d" , f[i].flight_id , f[i].departure_city , f[i].destination_city , f[i].date , f[i].a_seats);
  }
  scanf("%d" , &input);
  if(f[input-1].a_seats == 0){
    printf("Seat not available");
  }else{
    printf("seat successfully booked");
    f[input-1].a_seats--;
  }
}
void FlightDetails(struct flight f[3]){
  for(int i=0; i<3; i++){
    printf("\n%d. %s to %s on %s\nAvailable seats: %d\n" , f[i].flight_id , f[i].departure_city , f[i].destination_city , f[i].date , f[i].a_seats);
  }
}
int main(){
  struct flight flights[3] = {
    {1 , "karachi" , "lahore" , "16/11/2024" , 500},
    {2 , "islamabad" , "riyadh" , "18/11/2024" , 500},
    {3 , "london" , "moscow" , "18/11/2024" , 500}
  };
  int input , i=1;
  while(i){
    printf("\n-----MENU-----");
    printf("\n1.Book a Seat\n2.Display Flight Details\n3.Exit Program");
    scanf(" %d" , &input);
    if(input == 1){
      BookSeat(flights);
    }else if(input ==2){
      FlightDetails(flights);
    }else if(input ==3){
      return 1;
    }else{
      printf("\nInvalid input");
    }
  }
 
  return 0;
}