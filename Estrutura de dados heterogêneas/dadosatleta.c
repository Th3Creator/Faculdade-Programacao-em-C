#include <stdio.h> 
#include <stdio.h> 
#include <string.h>

// Dados de um Atleta

typedef struct 
{
    float peso;
    float altura;

}medidas;

typedef struct 
{
    char nome[50];
    medidas med_atleta;
    char esporte[15];
    int idade;
}atleta;


int main () {
    atleta atleta;

    printf("Informe o nome do atleta:");
    gets(atleta.nome);

    printf("Informe o peso do atleta:");
    scanf("%f", &atleta.med_atleta.peso);
    printf("Informe a altura do atleta:");
    scanf("%f", &atleta.med_atleta.altura);

    printf("Informe o esporte do atleta:");
    gets(atleta.esporte);

    printf("\nInforme a idade do atleta:");
    scanf("%i", &atleta.idade);

    // Impressão 

    printf("Nome do Atleta:");
    puts(atleta.nome);

    printf("\nPeso do atleta: %f\n", atleta.med_atleta.peso);
    printf("Altura do atleta: %f\n", atleta.med_atleta.altura);
    printf("Esporte do atleta:");
    puts(atleta.esporte);
    printf("\nIdade do atleta: %i", atleta.idade);

    return 0;
}