#include <stdio.h>

main(){
	int horas, minutos, segundos;
	scanf("%d", &segundos);
	horas = segundos / 3600;
	minutos = (segundos % 3600) / 60;
	segundos = segundos % 60;
	printf("%d:%d:%d\n", horas, minutos, segundos);
}
