#include <stdio.h>
#include <math.h>

double calculaPotencia(int base, int expoente) {
    return pow(base, expoente);
}

int main() {
    int base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    double resultado = calculaPotencia(base, expoente);
    printf("%d elevado a %d eh igual a %.0lf\n", base, expoente, resultado);

    return 0;
}