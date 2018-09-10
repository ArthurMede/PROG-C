#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vd = 3.17;
    float g;
    int m = 1000;

    printf("Quantos dólares custa o celular? ");
    scanf("%f", &g);

    if ((g * vd) < m){
        printf("Bom negocio!!");
    }else{
        printf("Não eh um bom negocio.");
    }
    return 0;
}
