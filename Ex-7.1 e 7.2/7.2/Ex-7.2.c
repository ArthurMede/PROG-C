#include <stdio.h>
#include <stdlib.h>
struct Vida{
	int vida;
	int mana;
}; 
	struct Champion{
	int dano_de_ataque;
	int poder_de_habilidade;
	struct Vida v;
};
void preenche (struct Champion *d){
	struct Champion c;
	printf("Da, PH, vida e mana: ");
	scanf("%d %d %d %d", &(*d).dano_de_ataque, &(*d).poder_de_habilidade, &((*d).v).vida, &((*d).v).mana); 
}
int main(void){
	struct Champion c;
	preenche(&c);
	printf("Dano de ataque = %d, Poder de habilidade = %d, vida = %d e mana = %d\n", c.dano_de_ataque, c.poder_de_habilidade, (c.v).vida, (c.v).mana);
	return 0;
}
  


