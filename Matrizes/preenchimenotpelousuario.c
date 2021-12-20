#include <stdio.h> 
#include <stdio.h> 


// Preenchimento de cada elemento de uma matriz feito pelo usuário

int main() {
    int n1, n2;

    printf("Digite a quantidade de linhas da sua matriz:");
    scanf("%i", &n1);

    printf("\nDigite a quantidade de colunas da sua matriz:");
    scanf("%i", &n2);

    float m [n1] [n2];
    int l, colun;

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
        printf("%8.2f", m [l] [colun]);
      }
    }
    
    
    return 0;
}