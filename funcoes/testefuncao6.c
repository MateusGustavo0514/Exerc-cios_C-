#include <stdio.h>

	int somapares(int number1, int i=1, int pares)
{
    while(i<number1)
	{
		if(i%2==0)
			pares = pares + i;
		i++;
	}
	printf("%d", pares);
}
int main(){
    int n1, i=1, soma;

    scanf("%d", &n1);
    printf("%d", somapares(n1, i, soma));
}
