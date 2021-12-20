#include <stdio.h> 
#include <stdio.h> 


int exponen(int b, int e) {
    if (e == 0)
    {
       return 1;
    }
    else 
        if (e > 0) // Enquanto essa condição aqui for verdadeira ele vai continuar fazer a potenciação
        {
            return(b * exponen(b, e -1)); 
        }
    else 
        if (e < 0)
        {
            return(1/exponen(b, -e));
        }
}


int main () {
    int b,e, resultado;

    printf("Digite o valor da base:");
    scanf("%i", &b);

    printf("\nDigite o valor do expoente:");
    scanf("%i", &e);


    resultado = exponen(b, e);

    printf("\nO numero %i elevado a %i e: %i", b, e, resultado);
    return 0;
}