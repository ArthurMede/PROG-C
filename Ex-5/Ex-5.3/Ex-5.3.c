#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c1,c2;
    int c;
    int* p1;
    int compras[]={100, 50, 80, 30, 20};

    printf("Digite o saldo da conta 1: ");
    scanf("%d", &c1);
    printf("Digite o saldo da cotna 2: ");
    scanf("%d", &c2);

    for (c=0;c<=4;c++){
        if (c1>c2){
            p1=&c1;
        }
        else{
            p1=&c2;
        }
        *p1=*p1-compras[c];
        printf("\nApos a compra %d, no valor de %d reais:\nconta1 = %d\nconta2 = %d",c+1,compras[c], c1, c2);
    }
    return 0;
}
