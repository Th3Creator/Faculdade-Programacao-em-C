#include <stdio.h> 
#include <stdio.h>  

// Utilizando o acumulador

// Média Aritmética simples de nota dos alunos

int main() {
    int numeros, soma, contador;
    float media;

    soma = 0;
    contador = 0;

    while ( numeros != 0)
    {
       printf("Digite um numero inteiro (0 caso tenha acabado):");
       scanf("%d", &numeros);

       soma = soma + numeros; // Aqui está o acumulador
       contador++;
    }

    contador = contador -1;

    media = soma / (float) contador;

    printf("\nO restultado da media e: %0.2f", media);
    return 0;
}