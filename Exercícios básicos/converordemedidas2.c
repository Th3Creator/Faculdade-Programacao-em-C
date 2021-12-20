#include <stdio.h> 
#include <stdio.h> 

// Converor2.0

int main() {
    float form1, valor1, form2, valor2;

    printf("\nConverter segundos para minutos, digite o valor:");
    scanf("%f", &valor1);

    form1 = valor1 / 60;

    printf("\nConverter minutos para horas, digite o valor:");
    scanf("%f", &valor2);

    form2 = valor2 / 60;

    printf("\nO valor em minutos e: %0.f min  ", form1);
    printf("\nO valor em horas e: %0.f hr  ", form2);
    return 0;
}






