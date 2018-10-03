#include <stdio.h>
#include <stdlib.h>
int preenche(int *vec, int n){
	int c;
	int num;
	for (c=0;c<=n-1;c++){
		printf("Digite o número q deseja colocar no vetor: ");
		scanf("%d", &num);
		*(vec+c)=num;
	}
	return *vec;
}
float media(int *vec, int n){
	float med;
	int c;
	float soma=0;
	int z=preenche(vec, n);
	for (c=0;c<=n-1;c++){
		soma+=*(vec+c);
	}
	med=soma/n;
	return med;
}
int main (void){
	int vec[100];
	int n;
	float x;
	int c;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);

	x=media(vec, n);
	printf("%.2f", x);
	return 0;
}
