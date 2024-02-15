#include <stdio.h>

int main(){
    int v, i=0;
    int posicao, maior_valor = 0;

    while (i<=100){
        i++;
        scanf("%d", &v);
    if(maior_valor<v){
        maior_valor = v;
        posicao = i;    
        }
    }
    printf("%d\n%d\n", maior_valor, posicao);
}
