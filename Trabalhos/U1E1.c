#include <stdio.h>

int main(){

    float c, f;
    
    for(c = -10; c <= 50; c = c + 10){
        f = (c *1.8) + 32;
        printf("%.2f %.2f\n", c, f);

    }
}
