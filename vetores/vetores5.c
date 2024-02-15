#include <stdio.h>

int OrdenarCrescente(int numero[10])
{
    int i, i2, i3, copia;

    for(i=0;i<10;i++)
    {
        printf("digite o numero %d: ", i+1);
        scanf("%d", &numero[i]);
    }
     
     printf("\n original: ");

    for(i=0;i<10;i++)
    {
        printf("%2d ", numero[i]);
    }

    for(i2=0;i2<10;i2++)
    {
        for(i3=i2;i3<10;i3++)
        {
            if(numero[i2]>numero[i3])
            {
                copia = numero[i2];
                numero[i2] = numero[i3];
                copia = numero[i3];
            }
        }
    }
    for(int i = 0;i<10;i++)
    {
        printf("\n%d", i, numero[i]);
    }
}
int main()
{
    int numero[10], resultado;
    resultado = OrdenarCrescente(numero);

    printf("%d", resultado);
}
