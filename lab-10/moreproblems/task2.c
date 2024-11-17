#include <stdio.h>
#include <math.h>
struct Point{
  float x;
  float y;
};
int CalDistance(struct Point p1 , struct Point p2){
  int d;
  d = sqrt(pow((p2.x-p1.x) , 2) + pow((p2.y-p1.y) , 2));
  return d; 
}
void checkBoundary(struct Point p1, struct Point p2){
  if((p1.x >= 0.0 && p1.x <= 10.0) && (p1.y >= 0.0 && p1.y <= 10.0)){
    printf("\nPoint (%.1f , %.1f) is within the Boundary" , p1.x , p1.y);
  }
  if((p2.x >= 0.0 && p2.x <= 10.0) && (p2.y >= 0.0 && p2.y <= 10.0)){
    printf("\nPoint (%.1f , %.1f) is within the Boundary\n" , p2.x , p2.y);
  }
}
int main(){
  struct Point p1 = {2.0 , 4.0};
  struct Point p2 = {8.0 , 6.0};
  float distance =0 ; 
  distance = CalDistance(p1, p2);
  checkBoundary(p1 , p2);
  printf("distance: %.2f" , distance);
}