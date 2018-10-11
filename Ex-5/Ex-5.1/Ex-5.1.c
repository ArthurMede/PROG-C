#include <stdio.h>
#include <stdlib.h>


int main(void){
	int a, b;
	int* p;

	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	printf("%d %d", a, b);

	if (a>b){
		 p=&a;
	}
	else if(b>a){
		 p=&b;
	}
	else{
		printf("Os números são equivalentes.");
	}
	*p=*p-50;
	printf("\n%d %d\n", a, b);
	return 0;
}
