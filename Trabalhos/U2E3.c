#include <stdio.h>


int main(){

    int a, b, calc;

    printf("Insira um numero\n");
    scanf("%d", &a);

    printf("Agora insira o segundo, para calcularmos o MDC entre eles!\n");
    scanf("%d", &b);

    while (b != 0){
    
    calc = a % b;
    
    a = b;

    b = calc;
}

printf("%d\n", a);

return 0;

}