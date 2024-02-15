#include <stdio.h>

int MenorNumero(int numero[10])
{
    int i, menor = 0;

    for(i=0;i<10;i++)
    {
        if(menor>=numero[i])
        {
            menor = numero[i];
        }
    }
    return menor;
}
int main()
{
    int v, menor, number[10];

    for(v=0;v<10;v++)
    {
        printf("insira o valor %d : ", v + 1);
        scanf("%d", &number[v]);
    }
    menor = MenorNumero(number);
    printf("o menor numero eh: %d", menor);
    return 0; 
}