#include <stdio.h>

//Primeiro declaramos a existência das funções
float soma(float a, float b);
float subtracao(float a, float b);
float multiplicacao(float a, float b);
float divisao(float a, float b);

//Vamos criar as definições das funções
float soma(float a, float b) {
  return a + b;
}

float subtracao(float a, float b) {
  return a - b;
}

float multiplicacao(float a, float b) {
  return a * b;
}

float divisao(float a, float b) {
  return a / b;
}

int main(){
  char opcao;
  float num1, num2;
  int continuar = 1;

  while(continuar) {
  //menu de opções
  printf("\nEscolha a operacao desejada:\n");
  printf("1 - Soma\n");
  printf("2 - Subtracao\n");
  printf("3 - Multiplicacao\n");
  printf("4 - Divisao\n");
  printf("5 - Sair\n");
  printf("Opcao: ");
  scanf(" %c", &opcao);

  switch (opcao) {
    case '1':
      printf("Digite dois numeros para somar: ");
      scanf("%f %f", &num1, &num2);
      printf("Resultado: %.2f\n", soma(num1, num2));
      break;
     case '2':
      printf("Digite dois numeros para subtrair: ");
      scanf("%f %f", &num1, &num2);
      printf("Resultado: %.2f\n", subtracao(num1, num2));
      break;
     case '3':
      printf("Digite dois numeros para multiplicar: ");
      scanf("%f %f", &num1, &num2);
      printf("Resultado: %.2f\n", multiplicacao(num1, num2));
      break;
     case '4':
      printf("Digite dois numeros para dividir: ");
      scanf("%f %f", &num1, &num2);
      if (num2 == 0) {
        printf("Erro! Nao podemos dividir por zero.\n");
      } else {
        printf("Resultado: %.2f\n", divisao(num1, num2));
      }
      break;
     case '5':
      continuar = 0;
      printf("Saindo...\n");
      break;
     default:
      printf("Opcao Invalida!\n");
  }
  }
  return 0;
}
