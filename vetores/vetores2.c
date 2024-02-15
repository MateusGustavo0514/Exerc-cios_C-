#include <stdio.h>

int MaiorNumero(int numero[10])
{
    int i, maior = 0;

    for(i=0;i<10;i++)
    {
        if(maior<numero[i])
        {
            maior = numero[i];
        }
    }
    return maior;
}
int main()
{
    int v, maior, number[10];

    for(v=0;v<10;v++)
    {
        printf("insira o valor %d : ", v + 1);
        scanf("%d", &number[v]);
    }
    maior = MaiorNumero(number);
    printf("o maior numero eh: %d", maior);
    return 0; 
}
