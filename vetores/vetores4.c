#include <stdio.h>

int Inverso(int numero[10])
{   
    int i, fim = 9, copia;

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
    
    for(i=0;i<5;i++)
    {
       copia = numero[i];
       numero[i] = numero[fim];
       numero[fim] = copia;
       fim--; 

    }
     printf("\n invertido: ");

    for(i=0;i<10;i++)
    {
        printf("%2d ", numero[i]);
    }

}
int main()
{
    int numero[10], resultado;
    resultado = Inverso(numero);

    printf("%d", resultado);
}