#include <stdio.h>

main(){
	int v, n, i=1;
    scanf("%d\n", &n);   
    
    while(i<=n){
    	i++;
    	scanf("%d", &v);
    	
  	if(v==0){
  		printf("NULL\n");}
  	else{  
  	if(v % 2 == 0)
  		printf("EVEN ");
  	else
  		printf("ODD ");
  	if(v>0)
  		printf("POSITIVE\n");
  	else
  		printf("NEGATIVE\n");
		}
	}	
}
    
