#include <stdio.h>

int main()
{
    int codigoPecaUm, qtdePecaUm, codigoPecaDois, qtdePecaDois;
    double valorPecaUm, valorPecaDois, valorTotal;

    scanf("%d %d %lf", &codigoPecaUm, &qtdePecaUm, &valorPecaUm);
    scanf("%d %d %lf", &codigoPecaDois, &qtdePecaDois, &valorPecaDois);

    valorTotal = (qtdePecaUm * valorPecaUm) + (qtdePecaDois * valorPecaDois);

    printf("VALOR A PAGAR: R$ %.2lf\n", valorTotal);

    return 0;
}