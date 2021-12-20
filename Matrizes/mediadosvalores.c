#include <stdio.h> 
#include <stdio.h> 

// Média dos valores de uma Matriz

int main () {
    int n1, n2, denominador;

    printf("Digite a quantidade de linhas da sua matriz:");
    scanf("%i", &n1);

    printf("\nDigite a quantidade de colunas da sua matriz:");
    scanf("%i", &n2);

    float m [n1] [n2], media = 0;
    int l, colun, somadiagonalp, somadiagonals;

    for (l= 0; l < n1; l++)
    {
      for (colun = 0; colun < n2; colun++)
      {
          printf("Informe o elemento da linha %i, coluna %i:", l, colun);
          scanf("%f", &m [l] [colun]);
      }
    }

    for (l= 0; l < n1; l++)
    {
        for (colun = 0; colun < n2; colun++)
        {
            media = media + m [l] [colun];
        }
    }
    
    denominador = n1 * n2;
    media = media / denominador;


    printf("A media da matriz e: %0.2f", media);
    return 0;
}
