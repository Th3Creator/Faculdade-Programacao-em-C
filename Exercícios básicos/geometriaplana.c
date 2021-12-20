#include <stdio.h> 
#include <stdio.h> 

// Formulas de Geometria Plana (Triángulo, Cuadrado, Círculo,)

int main() {
    float form, form2, form3, form4, base, altura, lado, raio;

    printf("Para descobrir a area de um Triangulo:\n");

    printf("\nDigite aqui o valor da base:");
    scanf("%f", &base);

    printf("\nDigite aqui o valor da altura:");
    scanf("%f", &altura);

    form = base * altura;
    form2 = form / 2;

    printf("\nO valor da area de um Triangulo e: %0.f\n", form2);

    //                             //                             //

    printf("\nPara descobrir a area de um Cuadrado:\n");

    printf("\nDigite aqui o valor do lado:");
    scanf("%f", &lado);

    form3= lado * lado;

    printf("\nO valor da area do Cuadrado e:%0.f\n", form3);

    //                             //                             //

    printf("\nPara descobrir a area de um Circulo:\n");

    printf("\nDigite aqui o valor do raio:");
    scanf("%f", &raio);

    form4= 3.14 * raio * raio;

    printf("\nO valor da area de um Circulo e:%0.f", form4);
    return 0;
}