#include <stdio.h>

main(){
	
	double valor, media, soma;
	int numb_positivos, i = 1;
	
	while(i <= 6){
		i++;
		scanf("%lf", &valor);
	if(valor > 0.0){
		numb_positivos++; 
		soma = soma + valor;	
			}	
		}
	media = soma / numb_positivos;
	printf("%d valores positivos\n", numb_positivos);
	printf("%.1lf\n", media);
	}
