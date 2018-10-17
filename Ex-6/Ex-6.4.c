#include <stdio.h>
#include <stdlib.h>
int strlen2(char* s2){
	int c=0;
	int cont=0;
	while (s2[c]!='\0'){
		cont+=1;
		c++;
	}
	return cont;
}
int main(){
	char s1[10];
	printf("Digite as letras q deseja por: ");
	scanf("%s", s1);
	int z = strlen2(s1);
	printf("A quantidade de elementos da string s1 é %d.\n", z);
	return 0;
}
