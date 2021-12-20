#include <stdio.h> 
#include <stdio.h> 

#define maximoalunos 100

// Notas de cada aluno
// Interessante pois percorre cada elemento indicado pelo scanf

int main() {
    int notas[maximoalunos], c, numalunos ;

    printf("Digite a quantidade de alunos:");
    scanf("%i", &numalunos);


    for (c = 0; c < numalunos; c++)
    {
        printf("Nota do aluno %i:", c+1);
        scanf("%i", &notas[c]);
    }

    printf("\nTodas as notas foram lidas:");

    printf("\nNotas informadas:");
    for (c= 0; c < numalunos; c++)
    {
       printf("Aluno %i: %i\n", c+1, notas[c]);
    }
    return 0;
}