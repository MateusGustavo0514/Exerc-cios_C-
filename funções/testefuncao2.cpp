#include <stdio.h>
    int calculoFibonacci(int n)
    {
        if(n==1)
            return (0);
        else
        {
            if(n==2)
                return (1);
            else
                return calculoFibonacci (n-1) + calculoFibonacci (n-2);
        }
    }
    int main(){
        int valor;
        scanf("%d", &valor);

        printf("%d", calculoFibonacci(valor));
    }