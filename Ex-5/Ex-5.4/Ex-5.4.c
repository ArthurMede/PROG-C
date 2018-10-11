#include <stdio.h>
#include <stdlib.h>
void troca(int* d, int* z){
    int t;
    t=*d;
    *d=*z;
    *z=t;
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

    troca(p1, p2);
    printf("\nApós a troca: ");

    printf("\nx=%d y=%d", x, y);

    return 0;
}
