#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 0;
	int soma = 0;
	float media;
	char temps[50];
	int c;
	int temp;
	for (c=0;c<50;c++){
		printf("Digite uma temp: ");
		scanf("%d", &temp);
		if ((temp>100)||(temp<-100)){
			printf("\n\n ERRO-> Digite apenas temperaturas entre -100 e 100 graus.\n\n");
			c--;
		}
		else{
			temps[c]=temp;
			soma+=temp;
		}
	}
	media = soma / 50;
	for (c=0;c<50;c++){
		if(temps[c] > media){
			cont+=1;
		}
		printf("%d Cº, ", temps[c]);
	}
	printf("Media: %.2f\n", media);
	printf("São %d temperaturas acima da média", cont);
    return 0;
}
