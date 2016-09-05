#include<stdio.h>
int main(){
  int far;
  printf("\nCELSIUS FARENHEIT\n");
  printf("\n");
  for (far=300;far>=0;far-=20){
    printf("%5.2f\t%4d\n",(5.0/9.0)*(far-32),far);
  }
  return 0;
}
