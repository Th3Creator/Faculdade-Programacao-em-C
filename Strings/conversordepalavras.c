#include <stdio.h> 
#include <stdio.h> 

#define valormax 10 // Dúvida aqui pro darlan

// Conversor de palavras, minúsculas para maiúscula e vice-versa

int main() {
    int c;
    char palavra[valormax];

    printf("Digite a palavra:");
    fgets(palavra, valormax, stdin);

    if (palavra[1] >= 'a' && palavra[1] <='z')
    {
        for (c = 0; c < valormax; c++)
        {
            palavra[c] = palavra[c] - 'a' + 'A';
            c+1;
        }
        puts(palavra);
    }
    else 
        if (palavra[0] >= 'A' && palavra[0] <= 'Z'){
          for (c = 0; c < valormax; c++)
        {
            palavra[c] = palavra[c] - 'A' + 'a';
            c+1;
        }
        puts(palavra);
        }

    return 0;
}

// Escrever a palvra e automaticamente colocar a quantidade do vetor já separando o espaço pro valor nulo... Darlan