#include <stdio.h>

main(){
    int x, y, i, c;
    scanf("%d\n%d", &x, &y);

    if (y < x){

        c = x;
        x = y;
        y = c;

    }
    
   for (i=x+1; i<y; i++){

     if (i % 5 == 2 || i % 5 == 3){
        printf("%d\n", i);
        }
    }
}
   
