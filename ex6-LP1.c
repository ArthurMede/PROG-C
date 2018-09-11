#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, s = 0;
    int c;
    printf("Digite n: ");
    scanf("%d", &n);
    for(c=1;c<=n;c++){
        s+=c*c;
    }
    printf("O somatorio  ao quadrado ate %d eh %d", n, s);
    return 0;
}
