#include <stdio.h>
#include <string.h>
void Reverse(char string[]){
  static int i =0;
  if(string[i] == '\0'){
    return;
  }else{
    Reverse(string+1);
    printf("%c" , string[i]);
  }
}
int main(){
  char string[20] =  "shazil";
  Reverse(string);
}