#include <stdio.h> 
#include <stdio.h> 

// Tabuada atualizada

int main () {
    int i, numero, form;


    printf("Digite o numero para iniciar a tabuada:");
    scanf("%i", &numero);

    for ( i = 1; i < 11; i++)
    {
        form = numero * i; 

        printf("\n%i x %i = %i\n", numero, i, form);
    }
    return 0;
}