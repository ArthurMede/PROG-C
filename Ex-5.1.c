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
		*p=a-50;
		printf("\n%d\n%d\n", *p, b);
	}
	else if(b>a){
		 p=&b;
		*p=b-50;
		printf("\n%d\n%d\n", *p, a);
	}
	else{
		printf("Os números são equivalentes.");
	}
	return 0;
}
