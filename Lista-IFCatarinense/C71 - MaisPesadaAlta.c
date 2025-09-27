//71. Crie um algoritmo que peça o nome, a altura e o peso de duas pessoas e apresente o nome da mais pesada 
//e o nome da mais alta.

#include <stdio.h>

int main(){
    char nome1[30], nome2[30];
    float altura1, altura2, peso1, peso2;

    printf("\nDigite o nome da primeira pessoa: ");
    scanf("%s", nome1);
    printf("Digite a altura da primeira pessoa (em metros): ");
    scanf("%f", &altura1);
    printf("Digite o peso da primeira pessoa (em kg): ");
    scanf("%f", &peso1);

    printf("\nDigite o nome da segunda pessoa: ");
    scanf("%s", nome2);
    printf("Digite a altura da segunda pessoa (em metros): ");
    scanf("%f", &altura2);
    printf("Digite o peso da segunda pessoa (em kg): ");
    scanf("%f", &peso2);

    if(peso1 > peso2){
        printf("A pessoa mais pesada e: %s\n", nome1);
    } else if(peso2 > peso1){
        printf("A pessoa mais pesada e: %s\n", nome2);
    } else {
        printf("As duas pessoas tem o mesmo peso.\n");
    }

    if(altura1 > altura2){
        printf("A pessoa mais alta e: %s\n", nome1);
    } else if(altura2 > altura1){
        printf("A pessoa mais alta e: %s\n", nome2);
    } else {
        printf("As duas pessoas tem a mesma altura.\n");
    }

    return 0;
}