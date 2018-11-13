#include <stdio.h>
#include <stdlib.h>
struct Champion{
	int dano_de_ataque;
	int poder_de_habilidade;
	int vida;
};
void preenche (struct Champion *d){
	struct Champion c;
	printf("Da, PH e vida: ");
	scanf("%d %d %d", &(*d).dano_de_ataque, &(*d).poder_de_habilidade, &(*d).vida); 
}
int main(void){
	struct Champion c;
	preenche(&c);
	printf("Dano de ataque = %d, Poder de habilidade = %d e vida = %d\n", c.dano_de_ataque, c.poder_de_habilidade, c.vida);
	return 0;
}
  

