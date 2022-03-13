#include <stdio.h>

int main(){

    int a, cont = 0, i = 0;

    printf("2 3 5 7 11 13 17 19 23 29 31 ");

    for (i = 2; i <= 1001; i = i + 1){
        
        if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 && i%11!=0 && i%13!=0 && i%17!=0 && i%19!=0 && i%23!=0 && i%29!=0 && i%31!=0){
                printf("%d ", i); 
            }
            

        }
         

return 0;
}
