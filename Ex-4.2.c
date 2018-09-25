#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num,c, valor;

    printf("Digite ate q numero primo deseja imprimir: ");
    scanf("%d", &valor);

    for(c=0; c<=valor; c++){
        if(todos_os_primos(c)==1){
            printf("%d\n", c);
        }
    }

}


int todos_os_primos(int num, int conta)
{
    int i;
    conta=0;


    for(i=1; i<=num; i++) {
        if(num%i==0){
            conta++;
        }
    }
    if(conta==2){
        return 1;
    }else{
        return 0;
    }


}
