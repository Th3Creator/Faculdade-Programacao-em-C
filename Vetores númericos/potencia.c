#include <stdio.h> 
#include <stdio.h> 

// Exercício de potência 

int main () {
    int i, potencias[10];

    potencias[0] = 1;

    printf("Digite o numero para comecar a potenciacao:");
    scanf("%i", &potencias[1]);

    for ( i = 2; i < 10; i++)
    {
        potencias[i] = pow(potencias[1],i); // formula de potência 
        printf("\n%i^%i=%i", potencias[1], i, potencias[i]);
    }
    return 0;
}