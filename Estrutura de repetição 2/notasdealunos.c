#include <stdio.h> 
#include <stdio.h>  



int main() {
    int nbimestre,soma,  notas, contador;
    char nomealun[20];

    soma = 0;
    // Nome do aluno
    printf("Digite o nome do aluno:");
    scanf("%s", &nomealun);

    // Número de bimestres
    printf("Digite a quantidade de bimestres:");
    scanf("%i", &nbimestre);


   for (contador = 0; nbimestre != contador; contador++)
   {
       printf("Digite a nota do %s no %i bimestre: ", nomealun, contador);
       scanf("%i", &notas);

       soma = soma + notas;
   }
    printf("%s sua nota e: %i", nomealun, soma);

}

// Nome do aluno 
// Ler o número de bimestres 
// Enquanto o número de notas não atingir o número de bimestre já registrados o programa irá executar
// Ler as notas