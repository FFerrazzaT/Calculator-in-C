#include <stdio.h>
#include <stdlib.h>

int main(){

  int num1, num2, soma, subtracao, multi, div;

  printf("Calculadora 1.0\n");
  printf("Entre os 2 numeros a serem processados: ");

  scanf("%i%i", &num1, &num2);

  soma = num1 + num2;
  subtracao = num1 - num2;
  multi = num1 * num2;
  div = num1 / num2;

  printf("Soma: %d \n", soma);
  printf("Subtracao: %d \n", subtracao);
  printf("Multiplicacao: %d \n", multi);
  printf("Divisao: %d \n", div);





}
