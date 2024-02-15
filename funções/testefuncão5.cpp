#include <stdio.h>
int calculoFato(int n1, int i, int fat)
{
    i= n1;
    fat=1;

   while(i>0)
   {
   	fat *= i;
   	i--;
   }
}

int main()
{
    int number, variavel, fatoracao;
    scanf("%d", &number);

    printf("%d\n", calculoFato(number,variavel,fatoracao));
}