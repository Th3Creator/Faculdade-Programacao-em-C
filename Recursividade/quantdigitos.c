#include <stdio.h> 
#include <stdio.h> 

int contnumber (int number) {
    int cont = 0;

    if (number != 0)
    {
        cont++;
        contnumber(number/10);
    }
    
    return cont;
}

int main () {
    int number, contador;

    printf("Digite o numero:");
    scanf("%i", &number);

    contador = contnumber(number);

    printf("\nA quantidade de digitos e: %i", contador);
    return 0;
}

// Tem erro aqui ainda