#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    float v;
    printf("Qual a velocidade atual do carro em milhas? ");
    scanf("%f", &v);

    c = v * 1.6;

    if ((c > 80)&&(c <100)){
        printf("Mantenha a velocidade");
    }else{
        if (c < 80){
            printf("Acelere");
        }else{
            printf("Diminua a velocidade");
        }
    }
    return 0;
}
