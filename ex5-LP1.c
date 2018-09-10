#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n;
    int s = 0;
    while (n != 0){
        printf("Digite um valor: ");
        scanf("%d", &n);
        s+= n;
    }
    printf("A soma eh %d", s);

    return 0;
}
