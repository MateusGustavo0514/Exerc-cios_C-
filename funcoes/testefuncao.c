#include <stdio.h>
    int par_impar(int numb1)
    {
        if(numb1 % 2 == 0)
        {
            printf("verdadeiro");
        }
        else
        {
            printf("falso");
        }

    }
    main()
        {
            int valor, calculo;
            scanf("%d", &valor);

            calculo = par_impar(valor); 
        }