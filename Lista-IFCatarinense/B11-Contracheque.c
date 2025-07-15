#include <stdio.h>

int main() {

    char mes[20];
    float ht, vh, pd, sb, td, sl;

    printf("\nInforme o mês trabalhado: ");
    scanf("%s", &mes);

    printf("Digite a quantidade de horas trabalhadas no mês: ");
    scanf("%f", &ht);

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &vh);

    printf("Digite o percentual de desconto no salário: ");
    scanf("%f", &pd);

    sb = ht * vh;

    td = (pd/100) * sb;

    sl = sb - td;

    printf("\n*** *** RESUMO DO CONTRACHEQUE *** ***\n");
    printf("Mês de referência: %s \n", mes);
    printf("Horas trabalhadas: %.2f h/mês \n", ht);
    printf("Salário bruto: R$ %.2f \n", sb);
    printf("Desconto em folha: %.2f %% (R$ %.2f) \n", pd, td);
    printf("\n--> Salário líquido: R$ %.2f \n\n", sl);

    return 0;

}