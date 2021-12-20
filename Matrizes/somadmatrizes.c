#include <stdio.h> 
#include <stdio.h> 

// Soma dos valores de uma Matriz

int main () {
    int nlinhas, ncolunas, form;

    // Informando a quantidade de linhas e colunas de cada matriz
    printf("Digite a quantidade de linhas da sua primeira matriz:");
    scanf("%i", &nlinhas);

    printf("Digite a quantidade de colunas da sua primeira matriz:");
    scanf("%i", &ncolunas);

    float m [nlinhas] [ncolunas];
    int l, colun;

    int nlinhas2, ncolunas2;

    printf("\nDigite a quantidade de linhas da sua segunda matriz:");
    scanf("%i", &nlinhas2);

    printf("Digite a quantidade de colunas da sua segunda matriz:");
    scanf("%i", &ncolunas2);

    float m2 [nlinhas2] [ncolunas2],  m3 [nlinhas] [ncolunas];




    // Preenchimento da primeira matriz
    printf("\nPreencha a primeira matriz\n");
    for (l= 0; l < nlinhas; l++)
    {
       for (colun = 0; colun < ncolunas; colun++)
       {
           printf("Informe o elemento da linha %i, coluna %i:", l, colun);
           scanf("%f", &m [l] [colun]);
       }
    }

    // Preenchimento da segunda matriz
    printf("\nPreencha a segunda matriz\n");
    for (l= 0; l < nlinhas; l++)
    {
       for (colun = 0; colun < ncolunas; colun++)
       {
           printf("Informe o elemento da linha %i, coluna %i:", l, colun);
           scanf("%f", &m2 [l] [colun]);
       }
       
    }
    

    // Soma dos valores 
    for (l= 0; l < nlinhas; l++)
    {
       for (colun = 0; colun < ncolunas; colun++)
       {
           m3[l] [colun] = m [l] [colun] + m2 [l] [colun];
       }
    }


    //Impressão dos valores 
    printf("\nResultado da soma da Matriz");
    for (l= 0; l < nlinhas; l++)
    {
        for (colun = 0; colun < ncolunas; colun++)
        {
            printf("%8.2f", m3 [l] [colun]);
        }
        printf("\n");
    }
    

    return 0;
}
