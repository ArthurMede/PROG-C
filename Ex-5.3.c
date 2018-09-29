#include <stdio.h>
#include <stdlib.h>

int main()
{
    int compras[]={100, 50, 80, 30, 20};
    int conta1;
    int conta2;
    int c;
    int* p;
    int* g;

    printf("Digite o saldo da conta 1: ");
    scanf("%d", &conta1);
    printf("Digite o saldo da conta 2: ");
    scanf("%d", &conta2);


    p=&conta1;
    g=&conta2;

    for (c=0;c<=4;c++){
        if (*p>*g){
            *p-=compras[c];
        }
        else{
            *g-=compras[c];
        }
        printf("\nApos a compra %d, no valor de %d reais:\nconta1 = %d\nconta2 = %d",c+1,compras[c], *p, *g);

    }
    return 0;
}
