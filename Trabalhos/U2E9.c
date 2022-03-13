#include <stdio.h>

int main(){
    
int a, i = 0;
float primeiro[300], segundo[300], escalar = 0;

scanf("%d", &a);

for (i = 0; i < a; i++){
    scanf("%f", &primeiro[i]);
}

for (i = 0; i < a; i++){
    scanf("%f", &segundo[i]);
}


for (i = 0; i < a; i++){
    
    escalar = escalar + primeiro[i] * segundo[i];
    
}
printf("%f", escalar);
return 0;
}