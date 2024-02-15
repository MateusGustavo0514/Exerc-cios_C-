#include <stdio.h>

int verificaPrimo(int valor, int i, int contador=0)
{ 
    for (i=1; i<=valor; i++)
        {
            if(valor%i == 0)
            {
                contador++;
            }
            if(contador > 2)
            {
                break;
            }
        }
    if(contador > 2)
        printf("nao eh primo");
    else
        printf("eh primo");
    }

main(){
    int valor, i, contador=0;
    scanf("%d", &valor);
    printf("%d\n", verificaPrimo(valor, i, contador));
}
    