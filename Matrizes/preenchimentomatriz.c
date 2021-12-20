#include <stdio.h> 
#include <stdio.h> 

// Preenchimento de cada elemento de uma matriz 

int main () {
    int m[4] [4], l, colun; // Simbolizando linha por "l" e coluna por "colun"

    for (l= 0; l < 4; l++)
    {
        for ( colun = 0; colun < 4; colun++)
        {
        m [l] [colun] = 0;
        }
    }
    
    printf("Matriz");
    for (l= 0; l < 4; l++)
    {
        printf("\nLinha %i\n", l);
        for (colun = 0; colun < 4; colun++)
        {
           printf("%d", m[l] [colun]);
        }
        
    }
    return 0;
}

// Fez um for de preenchimento 
// Fez um for de impressão na tela