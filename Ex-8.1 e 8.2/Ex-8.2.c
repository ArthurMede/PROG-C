#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE* f=fopen("/tmp/thuzinshow.txt", "r");
    int c;
    int x=fgetc(f);
    for (c=0;c<x;c++){
        int c=fgetc(f);
        printf("%c", c);
    }
    printf("\n");
    return 0;
}
