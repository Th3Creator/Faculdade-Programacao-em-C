#include <stdio.h> 
#include <stdio.h> 

//Exemplo para estrutura condicionais

int main() {
    float valor1, valor2, maior;

    printf("\nDigite o primeiro valor:");
    scanf("%f", &valor1);

    printf("\nDigite o segundo valor:");
    scanf("%f", &valor2);

    if (valor1 > valor2) {
        maior= valor1;
    }
    else{
        maior= valor2;
    }

    printf("\nO valor maior e = %0.f", maior);
    return 0;
}