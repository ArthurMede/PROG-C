#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome, nme, nma;
	int c=1, v, e, d, pa, P=0, p=1;
	while(c<=20){
		printf("Digite o nome do time %d: \n", i);
		scanf("%s",&nome);
		printf("Digite o numero de vitorias: \n");
		scanf("%d", &v);
		printf("Digite o numero de empates: \n");
		scanf("%d", &e);
		printf("Digite o numero de derrotas: \n");
		scanf("%d", &d);
		ponto_atual = (v*3) + e;
		if(pa>P){
			P = pa;
			nma = nome;
		}
		else{
			p = pa;
			nme = nome;
		}

		c+=1;
	}
	printf("Time %c tem mais pontos.\n", nma);
	printf("Time %c tem menos pontos.\n", nme);
    return 0;

}
