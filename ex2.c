#include <stdio.h>

int main(void){
  float salario = 1000, aumento = 1.5/100; 
  int i, anoIni = 2005, anoFim = 2010;

  for (i = anoIni + 1; i < anoFim; i++ ){
    salario = salario + (salario * aumento); 
    printf("salario %i: %.2f - aumento %.1f\% \n",i,salario,aumento*100); 
  }
  printf("salario: %.2f", salario); 

  return 0;
}