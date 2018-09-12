#include <stdio.h>
#include <stdlib.h>

int main(){

    int c, n1, n2;

    printf("Digite dois números: ");
    scanf("%d %d", &n1, &n2);

    if (n1>n2){
        for (c=n2+1;c<n1;c++){
            printf("\n%d", c);
        }
    }else{
        if (n2>n1){
            for (c=n1+1;c<n2;c++){
                printf("\n%d", c);
            }
        }else{
            printf("Os numeros sao equivalentes.");
        }
    }

    return 0;
}
