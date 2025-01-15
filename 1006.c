#include <stdio.h>

int main()
{
    double A, B, C, SOMA, MEDIA;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    SOMA = (A * 2) + (B * 3) + (C * 5);

    MEDIA = SOMA / 10;

    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}