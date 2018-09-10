#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1, v2;
    printf("Digite dois valores: ");
    scanf("%f %f", &v1, &v2);

    if (v1 > v2){
        printf("O valor %.2f e maior que %.2f", v1, v2);
    } else{
        if (v2 > v1){
            printf("O valor %.2f e maior que %.2f", v2, v1);
        }else{
            printf("Os valores sao iguais");
        }


    }
    return 0;
}
