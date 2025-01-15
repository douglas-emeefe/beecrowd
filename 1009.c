#include <stdio.h>

int main()
{
    char nome;
    double salarioFixo, totalVendas, salarioTotal, comissao = 15;

    scanf("%s", &nome);
    scanf("%lf", &salarioFixo);
    scanf("%lf", &totalVendas);

    salarioTotal = salarioFixo + (totalVendas * (comissao / 100));

    printf("TOTAL = R$ %.2lf\n", salarioTotal);

    return 0;
}