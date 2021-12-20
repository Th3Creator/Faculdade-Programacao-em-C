#include <stdio.h> 
#include <stdio.h> 

// Formulas de Geometria Espacial (Pirâmide, Cone, Cubo, Esfera)

int main() {
    float form1, form2, form3, form4, form5, form6, form7, ab, h, h2, h3, raio, raio2, raio3;

    printf("\nPara descobrir o volume de uma Piramide:\n");

    printf("\nDigite aqui a area da base:");
    scanf("%f", &ab);
    
    printf("\nDigite aqui a altura:");
    scanf("%f", &h);

    form1= ab * h;
    form2= form1 / 3;

    printf("\nO valor do volume de um a Piramide e: %0.f\n", form2);

    //                             //                             //

    printf("\nPara descobrir o volume de um Cone:\n");

    printf("\nDigite o valor do raio:");
    scanf("%f", &raio);

    printf("\nDigite aqui o valor da altura:");
    scanf("%f", &h2);

    form3= 3.14 * raio * raio * h2;
    form4= form3 / 3;

    printf("\nO valor do volume de um Cone e:%0.f\n", form4);

    //                             //                             //

    printf("\nPara descobrir o volume de um Cilindro:\n");

    printf("\nDigite o valor do raio:");
    scanf("%f", &raio2);

    printf("\nDigite aqui o valor da altura:");
    scanf("%f", &h3);

    form5= 3.14 * raio2 * raio2 * h3;

    printf("\nO valor do volume de um Cilindro e:%0.f\n", form5);

    //                             //                             //

    printf("\nPara descobrir o volume de uma Esfera:\n");

    printf("\nDigite aqui o valor do raio:");
    scanf("%f", &raio3);

    form6= 4 * 3.14 * raio3 * raio3 * raio3;
    form7= form6 / 3;

    printf("\nO valor do volume de uma Esfera e:%0.f\n", form7);
    return 0;
}
