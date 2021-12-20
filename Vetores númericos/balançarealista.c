#include <stdio.h> 
#include <stdio.h> 

// Balança Realista / Melhor matéria do curso...

int main () {
    int pesoatual, pesoanterior, form, form2;

    printf("Digite o seu peso atual:");
    scanf("%i", &pesoatual);

    printf("\nDigite o seu peso anterior:");
    scanf("%i", &pesoanterior);

    form =  pesoatual - pesoatual * 0.2 ; //Emagreceu
    form2 = pesoatual * 0.25 + pesoatual; // Ganhou 


    if (form < pesoanterior )
        printf("\nCuidado emagreceu muito\n");
    else
        if(form2 > pesoanterior )
        printf("\nCuidado engordou muito\n");


    // Se a pessoa perdeu 20% do peso atual em comparação ao anterior   
    // Se a pessoa ganhou 25% do peso atual em comparação ao anterior 
 return 0;
}