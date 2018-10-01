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
	printf("Digite um número: ");
	scanf("%d", &n);

	int primo = eh_primo(n);
	if (primo==0){
		printf("O número %d não é primo.", n);
	}
	else{
		printf("O número %d é primo!", n);
	}

	return 0;
}

