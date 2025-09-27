//57. Elaborar um algoritmo que lê dois valores a e b e os escreve com a mensagem: 
//“São múltiplos” ou “Não são múltiplos”.

#include <stdio.h>

int main() {
  int a, b;

  printf("Digite dois valores inteiros: ");
  scanf("%d %d", &a, &b);

  if (a % b == 0 || b % a == 0) {
    printf("São múltiplos\n");
  } else {
    printf("Não são múltiplos\n");
  }

  return 0;
}