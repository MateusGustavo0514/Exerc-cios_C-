#include <stdio.h>
#include <math.h>

main(){
	int valor1, valor2, valor3, maior, maior_total;
	
	scanf("%d%d%d", &valor1, &valor2, &valor3);
	
	maior = (valor1 + valor2 + abs(valor1 - valor2)) /2;
	maior_total = (maior + valor3 + abs(maior - valor3)) /2;
	
	printf("%d eh o maior\n", maior_total);
}
