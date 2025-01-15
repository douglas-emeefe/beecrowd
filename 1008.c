#include <stdio.h>

int main()
{
    int numFuncionario, horasTrabalhadas;
    double valorHora, SALARY;

    scanf("%d", &numFuncionario);
    scanf("%d", &horasTrabalhadas);
    scanf("%lf", &valorHora);

    SALARY = horasTrabalhadas * valorHora;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numFuncionario, SALARY);

    return 0;
}
