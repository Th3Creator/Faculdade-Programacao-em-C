#include <stdio.h> 
#include <stdio.h> 

int main () {
    int auxn, n, c, c2;
    int *ptr;

    // Quantidade de números dentro do vetor
    printf("Digite a quantidade de numeros:");
    scanf("%i", &n);

    int vetor[n];

    // For de preenchimento 
    for (c= 0; c < n; c++)
    {
       printf("Digite o numero do elemento %i:", c+1);
       scanf("%i", &vetor[c]);
    }
    
    ptr = &vetor[0];

    // For de ordem 
    for (c = 0; c < n; c++)
    {
        for (c2 = 0; c2 < n; c2++)
        {
            if ((ptr+c) < (ptr+c2))
            {
                auxn = *(ptr+c);
                *(ptr+c) = *(ptr+c2);
                *(ptr+c2) = auxn;
            }
        }
    }
    

    // For de printf
    for (c = 0; c < n; c++)
    {
        printf("%i", vetor[c]);
    }
    return 0;
}