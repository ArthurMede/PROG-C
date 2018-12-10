#include <stdio.h>
#include <stdlib.h>
struct Champion{
    int dano_ataque;
    int poder_habilidade;
    int vida;
    union{
        int mr;
        int arm;
    } resist;
};
struct Game{
    int qtd_champ;
    int jogadores;
    struct Champion champ;
};
void preenche2(struct Game *d, int t){
    printf("Digite a qtd de campeão, jogadores; dano, poder e vida, respectivamente: ");
    scanf("%d %d %d %d %d", &(*d).qtd_champ, &(*d).jogadores, &((*d).champ).dano_ataque, &((*d).champ).poder_habilidade, &((*d).champ).vida);            
    printf("Agora, digite a resistencia: ");
    if (t==1){
        scanf("%d", &(((*d).champ).resist).mr);
    }
    if (t==2){
        scanf("%d", &(((*d).champ).resist).arm);
    }
}
int main(){
    struct Game c;
    int r;
    printf("Digite o tipo de resistência do seu personagem: ");
    printf("Resistência mágica(1) ou Armadura(2)\n");
    scanf("%d", &r);
    preenche2(&c, r);
    printf("qtd de campeão, jogadores; dano, poder e vida, respectivamente: %d, %d, %d, %d, %d ", c.qtd_champ, c.jogadores, (c.champ).dano_ataque, (c.champ).poder_habilidade, (c.champ).vida);
    if (r==1){
    printf("Resistência mágica = %d e Armadura = 0", ((c.champ).resist).mr);
	}
	if (r==2){
    printf("Resistência mágica = 0 e Armadura = %d", ((c.champ).resist).arm);
	}
    return 0;
}
