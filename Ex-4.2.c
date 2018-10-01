#include <stdio.h>
#include <stdlib.h>


int eh_primo(int n, int primo){
	int c;
	int cont = 0;
	for (c=1;c<=n;c++){
		if (n%c==0){
			cont+=1;
		}
	}
	if (cont<=2){
        primo=1;
	}
	else{
        primo=0;
	}
	return primo;
}
int todos_os_primos(int n,int primo){
    int c=0;
    for (c=2;c<=n;c++){
        int x=eh_primo(c, n);
        if(x==1){
            printf("%d\n", c);
        }

    }
    return 0;
}
int main(void){
	int n;
	printf("Digite um número: ");
	scanf("%d", &n);

	int primo = todos_os_primos(n, primo);

	return 0;
}
