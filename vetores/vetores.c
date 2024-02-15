#include <stdio.h>

double CalculoMedia(double numbers[10])
{
    int i;
    double soma = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &numbers[i]);
        soma += numbers[i];
    }

    return soma / 10;
}

int main()
{
    double m;
    double numero[10];
    m = CalculoMedia(numero);
    printf("A media dos numeros eh: %.2lf\n", m);
    return 0;
}
