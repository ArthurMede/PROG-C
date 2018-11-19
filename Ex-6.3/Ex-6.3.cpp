#include <stdio.h>
#include <stdlib.h>
struct guarda{
    int x;
    int y;
};
void preenche(struct guarda* c){
    int j;
    for (j=0;j<=9;j++){
        printf("Digite o ponto x%d y%d: ", j+1, j+1);
        scanf("%d %d", &(*c).x, &(*c).y);
    }
}
void preenche_vetor(struct guarda c, int *vetor){
    int j;
    for (j=0;j<=19;j++){
        *(vetor+j)=c.x;
        j++;
        *(vetor+j)=c.y;
    }
}
int retorna(int *vetor){
    int c;
    int maior=0;
    int maior2=0;
    for(c=0;c<=19;c++){
        if (*(vetor+c)>maior && (*vetor+c+1)>maior2){
            maior=*(vetor+c);
            maior2=*(vetor+c+1);
        }
        c++;
    }    
    return maior;
}
int retorna2(int *vetor){
    int c;
    int maior=0;
    int maior2=0;
    for(c=0;c<=19;c++){
        if (*(vetor+c)>maior && (*vetor+c+1)>maior2){
            maior=*(vetor+c);
            maior2=*(vetor+c+1);
        }
        c++;
    }    
    return maior2;
}        
int main(){
    struct guarda vet;
    int vetor[20];
    preenche(&vet);
    preenche_vetor(vet, vetor);
    int t=retorna(vetor);
    int p=retorna2(vetor);
    printf("Maior distância do ponto (0,0) é (%d,%d)", t, p);
    return 0;
}

