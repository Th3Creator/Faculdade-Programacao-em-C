#include <stdio.h> 
#include <stdio.h> 

// Converor

int main() {
    float form1, valor1, form2, valor2;

    printf("\nConverter horas para minutos, digite o valor:");
    scanf("%f",&valor2);

    form2 = 60 * valor2;


    printf("\nConverter minutos para segundos, digite o valor:");
    scanf("%f",&valor1);

    form1 = 60 * valor1;

    printf("\nO valor em minutos e: %0.f min",form2);
    printf("\nO valor em segundos e: %0.f s",form1);
    return 0;
}

//Passo a passo:
// 1 Colocar o tipo das variáveis e constantes primeiro que tudo
// 2 Colocar o \n em todos os printf