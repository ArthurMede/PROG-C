#include <stdio.h>
#include <stdlib.h>


int eh_primo(int n){
    int primo;
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
int main(void){
	int n;
	printf("Digite um n�mero: ");
	scanf("%d", &n);

	int primo = eh_primo(n);
	if (primo==0){
		printf("O n�mero %d n�o � primo.", n);
	}
	else{
		printf("O n�mero %d � primo!", n);
	}

	return 0;
}

