#include <stdio.h>

int Plus(int numero[5], int numero2[5])
{
    int i, total = 0, total2 = 0, soma;

    for(i=0;i<5;i++)
    {
        printf("primeiro valor da %d conta: ", i+1);
        scanf("%d", &numero[i]);
        
        total += numero[i];
    }
    for(i=0;i<5;i++)
	{
		printf("segundo valor da %d conta: ", i+1);
		scanf("%d", &numero2[i]);
			
		total2 += numero2[i];
	}

	soma = total + total2;
	
    return soma;
}
int main(){
    int numero[5], numero2[5], soma;

    soma = Plus(numero, numero2);

    printf("resultado das somas: %d", soma);
    return 0;
}