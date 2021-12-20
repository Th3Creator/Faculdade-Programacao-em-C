#include <stdio.h> 
#include <stdio.h> 

// Equação do 2° grau

int main() {
    float a, b, c, delta;

    printf("\nDigite o valor de 'a':");
    scanf("%f",&a);

    printf("\nDigite o valor de 'b':");
    scanf("%f",&b);

    printf("\nDigite o valor de 'c':");
    scanf("%f",&c);

    delta = b * b -4 * a * c;

    printf("\nO valor de delta e:%0.f\n", delta);

    if( delta >= 0) {
        printf("Existem raizes possiveis, utilize o programa para calcular x1 e x2\n");
    }
    else {
        printf("\nNao existem raizes reais");
    }
    return 0;
}