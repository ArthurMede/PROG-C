#include <stdio.h>
#include <stdlib.h>

int todos_os_primos(int max)
{
	int c;
	int count = 0;
	while (max>0){
		for (c=1; c<=max; c++){
			if (max%c == 0){
				count++;
			}
		}
		if (count == 2){
			printf("%d\n", max);
		}
		max--;
		count = 0;
	}
}
int main(void){
	int max;
	printf("Digite até que numero deseja verificar se é primo: ");
	scanf("%d", &max);
	int x = todos_os_primos(max);
	return 0;
}

