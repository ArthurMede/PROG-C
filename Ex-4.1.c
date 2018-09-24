#include <stdio.h>
#include <stdlib.h>
	

int eh_primo(int n){
	int c;
	int cont = 0;
	for (c=2;c<=n;c++){
		if (n%c==0){
			cont+=1;
		}
	}
	return cont;
}
int main(void){
	int n;
	printf("Digite um número: ");
	scanf("%d", &n);
	
	int EP = eh_primo(n);
	if (EP>2){
		printf("O número %d não é primo.", n);
	}
	else{
		printf("O número %d é primo!", n);
	}
	
	return 0;
}
	
		
