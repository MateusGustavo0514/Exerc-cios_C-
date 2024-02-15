#include <stdio.h>

int somaDigitos(long long int n) {
    int soma = 0;
    
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }

    return soma;
}

int main() {
    long long int num;
    printf("Digite um numero inteiro positivo: ");
    scanf("%lld", &num);

    if (num < 0) {
        printf("Por favor, digite um numero inteiro positivo.\n");
    } else {
        int resultado = somaDigitos(num);
        printf("A soma dos digitos do numero e: %d\n", resultado);
    }

    return 0;
}