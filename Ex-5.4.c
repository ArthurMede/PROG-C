#include <stdio.h>
#include <stdlib.h>
int troca(int* p1, int* p2, int x, int y){
    *p1=y;
    *p2=x;

    return p1, p2;
}

int main()
{
    int* p1;
    int* p2;
    int x, y;

    printf("Digite o valor de x e y, respectivamente: ");
    scanf("%d %d", &x, &y);

    printf("x=%d   y=%d", x, y);

    p1=&x;
    p2=&y;

    int z=troca(p1, p2, x, y);
    printf("\nApós a troca: ");

    printf("\nx=%d y=%d", x, y);

    return 0;
}
