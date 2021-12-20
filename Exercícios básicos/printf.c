#include <stdio.h> 
#include <stdio.h> 

// Estudo do printf
int main () {
    printf("\nTExTANDO");

    int n = 10;
    int n2 = 20;
    int n3 = 30;
    int n4 = 40;

    printf("\nAparecendo o valor %d", n);
    //%d indica a posição em que a variável vai aparecer, no caso as variaveis "n's"
    //\n é uma quebra de linha

    printf("\nAparecendo os valore em ordem:%d, %d, %d,%d", n, n2, n3, n4);
    return 0;
}