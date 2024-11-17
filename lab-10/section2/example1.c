#include <stdio.h>
struct Student{
  int id;
  char name[50];
  float marks;
};
void printStudent(struct Student s){
  printf("ID: %d\nName: %s\nMarks: %.2f" , s.id, s.name, s.marks);
}
int main(){
  struct Student student1 = {1 , "Shazil" , 99};
  printStudent(student1);
  return 0;
}