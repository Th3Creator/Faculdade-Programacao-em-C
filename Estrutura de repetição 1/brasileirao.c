#include <stdio.h> 
#include <stdio.h> 

// Teste de mesa em relação aos diferentes grupos de uma sala

// Calcular o número de pontos de cada um dos times que participa do campeonato
// Cada vitória vale 3 pontos e cada empate vale 1 ponto



int main() {
    float contador, numTimes, vitoria, empate, derrota;
    char nomeDoTime[19];

    printf("\nDigite a quantidade de times presentes no campeonato:");
    scanf("%f", &numTimes);

    contador = 0;

    

    while (contador < numTimes)
    {
        // Nome do time
        printf("\nDigite aqui o nome do time:");
        scanf("%s", &nomeDoTime);

        // Vitórias 
        printf("\nDigite aqui o numero de vitorias:");
        scanf("%f", &vitoria);

        // Empates
        printf("\nDigite aqui o numero de empates:");
        scanf("%f", &empate);

        // Derrotas
        printf("\nDigite aqui o numero de derrotas:");
        scanf("%f", &derrota);

        printf("\nO total de pontos do %s e: %0.f\n", &nomeDoTime, (3 * vitoria) + (1 * empate));

        contador++;
    }
    return 0;
}