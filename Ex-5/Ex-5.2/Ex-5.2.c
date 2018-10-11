#include <stdio.h>
#include <stdlib.h>

int conta(int* p, int valor){
    int x = *p-valor;
    return x;
}

int main()
{
    int conta1;
    int conta2;
    int* p;
    int* p1;
    int valor;

    printf("Digite o saldo da conta 1: ");
    scanf("%d", &conta1);
    printf("Digite o saldo da conta 2: ");
    scanf("%d", &conta2);
    printf("Digite o valor a ser debilitado: ");
    scanf("%d", &valor);

    printf("A conta 1 possui um saldo de R$ %d.00\n", conta1);
    printf("A conta 2 possui um saldo de R$ %d.00\n", conta2);

    if (conta1>conta2){
        p=&conta1;
        p1=&conta2;
    }
    else{
        p=&conta2;
        p1=&conta1;
    }
    int x=conta(p, valor);
    printf("Após ser feita a compra:\n");

    printf("O saldo da conta utilizada ficou R$ %d.00", x);
    printf("\nO saldo da conta não utilizada ficou R$ %d.00", *p1);

    return 0;
}
