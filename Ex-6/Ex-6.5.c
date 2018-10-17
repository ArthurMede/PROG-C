#include <stdio.h>
#include <stdlib.h>
void strjoin(char* f1, char* f2, char* f3){
    int cont_o1=0;
    int cont_o2=0;
    int c=0;
    int i=0;
    int soma;
    while (f1[c] != '\0'){
        cont_o1+=1;
        c++;
    }
    while (f2[i] != '\0'){
        cont_o2+=1;
        i++;
    }
    soma=cont_o1+cont_o2;

    for (c=0;c<=cont_o1;c++){
        f3[c]=f1[c];
    }
    for (i=0;i<=cont_o2;i++){
        f3[i+cont_o1]=f2[i];
    }
    f3[soma+1]='\0';
}
int strlen2(char* v){
	int c=0;
	int cont=0;
	while (v[c]!='\0'){
		cont+=1;
		c++;
	}
	return cont;
}
int main(){
	char o1[10];
	char o2[10];
	char d[21];
    printf("Digite a string q deseja por no vetor s1: ");
    scanf("%s", o1);
    printf("Digite a string q deseja por no vetor s2: ");
    scanf("%s", o2);
    strjoin(o1, o2, d);
    int x=strlen2(d);
    int cont_o1=0;
    int cont_o2=0;
    int c=0;
    int i=0;
    int soma;
    while (o1[c] != '\0'){
        cont_o1+=1;
        c++;
    }
    while (o2[i] != '\0'){
        cont_o2+=1;
        i++;
    }
    soma=cont_o1+cont_o2;
    printf("\nO número de elementos do vetor destino é %d. A string é:\n", x);
    for (c=0;c<=soma+1;c++){
        printf("%c", d[c]);
    }
    printf("\n");

}
