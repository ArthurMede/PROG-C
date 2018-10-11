#include <stdio.h>
#include <stdlib.h>
void preenche(int arr[10][10], int l, int c){
	int j, i, n;
	for (j=0;j<l;j++){
		for (i=0;i<c;i++){
			printf("Digite o elemento[%d][%d]: ",j+1, i+1);
			scanf("%d", &n);
			arr[j][i]=n;
		}
	}
}
float media(int arr[10][10], int l, int c){
	float soma=0;
	int j, i;
	for (j=0;j<l;j++){
		for (i=0;i<c;i++){
			soma+=arr[j][i];
		}
	}
	float m=soma/(l*c);
	return m;
}
int main(void){

	int arr[10][10];
	int l,c;
	printf("Digite a quantidade de linhas e de colunas, respectivamente: ");
	scanf("%d %d", &l, &c);

	preenche(arr,l,c);
	float x=media(arr, l, c);
	printf("A média dos valores digitados é %.2f", x);
	return 0;
}
