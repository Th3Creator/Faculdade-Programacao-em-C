#include <stdio.h> 
#include <stdio.h> 

// Conversor de letras, minúsculas para maiúscula e vice-versa

int main () {
    char c;
    
    printf("Digite a letra:");
    c = getchar(); // Vai pegar a letra e atribuir a variavel c


    //Preste a atenção na fórmula, é ali que rola a magia
    // De contexto você tem que saber o que é a tabela ASCII
    if (c >= 'a' && c <='z') // ele pega a tabela ASCII e verifica lá se a letra passada na variável c contem dentro dos parâmetros passado na condicional 
    {
        putchar(c - 'a' + 'A');
        // A formula se baseia na seguinte observação, indepente da letra ele vai pegar a posição em 
        // que ela se encontra, só lembrar do batalha naval ou bom dia e companhia, vai pegar a posição
        // da letra e diminuir com a posição da letra inicial, dando assim o número de casas para somar com 
        // a próxima letra inicial em ser convertida, maiúscula ou mínuscula, somando com essa inicial, indepente 
        // de qual ela seja, vai a posição na onde ela vai ser convertida. Espero que vc do futuro entenda isso, 
        // qualquer coisa é só ver a aula 2.
    }
    else 
        if (c >= 'A' && c <= 'Z') {
            putchar(c - 'A' + 'a');
        }
    

    return 0;
}


// Dizer qual é a palavra {
//  Vetor, ver a aula sobre lá e tals...
//  Printf & getchar()
//}

// Verificador de palavras mínusculas ou maiúscula 
// Pegar cada palavra e transformála