#include <stdio.h> 
#include <stdio.h> 

// Soma dos elementos da diagonal principal e dos elementos da diagonal secundária 

int main() {
    int n1, n2;

    printf("Digite a quantidade de linhas da sua matriz:");
    scanf("%i", &n1);

    printf("\nDigite a quantidade de colunas da sua matriz:");
    scanf("%i", &n2);

    float m [n1] [n2];
    int l, colun, somadiagonalp, somadiagonals;

    for (l= 0; l < n1; l++)
    {
      for (colun = 0; colun < n2; colun++)
      {
          printf("Informe o elemento da linha %i, coluna %i:", l, colun);
          scanf("%f", &m [l] [colun]);
      }
    }

    somadiagonalp = 0;

    for ( l = 0; l < n1; l++)
    {
        somadiagonalp += m [l] [l];
    }

    somadiagonals = 0;
    
    for (l= 0, colun=n1-1; l < n1; l++, colun--)
    {
        somadiagonals += m [l] [colun]; 
    }
    

    printf("\nA soma dos elementos da diagonal principal e:%i\n", somadiagonalp);
    printf("A soma dos elementos da diagonal secundaria e:%i", somadiagonals);


    return 0;
}