#include <stdio.h>

main(){
    int number_1, number_2, number_3, variavel_2, variavel_1;
    scanf("%d", &number_1);
    
    for(variavel_1=0; variavel_1<number_1; variavel_1++){
    	number_2=0;
    	scanf("%d", &number_3);
    	if(number_3<4) 
			printf("%d eh primo\n", number_3);
    	else{
    		for(variavel_2=2; variavel_2<number_3; variavel_2++){
    			if(number_3%variavel_2==0){
    				number_2=1;
    				break;
				}
				else number_2=2;
				}
			}
			if(number_2==1)
				printf("%d nao eh primo\n", number_3);
			else if(number_2==2)
				printf("%d eh primo\n", number_3);
    	}
    	return 0;
	}
