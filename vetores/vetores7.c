#include <stdio.h>

int Multi(int numero[5], int numero2[5])
{
    int i, total = 0, total2 = 0, multiplica;

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

	multiplica = total * total2;
	
    return multiplica;
}
int main(){
    int numero[5], numero2[5], multiplica;

    multiplica = Multi(numero, numero2);

    printf("resultado das somas: %d", multiplica);
    return 0;
}