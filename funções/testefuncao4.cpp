#include <stdio.h>
int imprimeTabuada(int n1, int n2, int i, int calculo){
    n2=0;
    i=1;
    while(i<=10){
		i++;
		n2++;
		calculo= n1*n2;
	printf("%d\n", calculo);
	}
}
int main(){
    int numb1, numb2, variavel, conta;

    scanf("%d", &numb1);
    printf("%d", imprimeTabuada(numb1, numb2, variavel, conta));
}