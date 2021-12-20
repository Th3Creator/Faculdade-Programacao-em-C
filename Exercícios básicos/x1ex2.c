#include <stdio.h> 
#include <stdio.h> 

// Valores de delta 1 e delta 2 

int main () {
    float a, b, x1, x2, form1, form2, form3, form4, form5, form6, raiz1, raiz2;

    printf("\nDigite o valor de 'a':");
    scanf("%f",&a);
    printf("\nDigite o valor de 'b':");
    scanf("%f",&b);

    printf("\nDigite o valor de delta para achar x1:");
    scanf("%f", &x1);

    printf("\nDigite o valor de delta para achar x2:");
    scanf("%f", &x2);

    raiz1= sqrt(x1);
    raiz2= sqrt(x2);

    form1= -b + raiz1;
    form2= 2 * a;
    form3= form1 / form2;

    form4= -b - raiz2;
    form5= 2 * a;
    form6= form4 / form5;

    printf("\nO valor de x1 e: %0.f", form3);
    printf("\nO valor de x2 e: %0.f", form6);
}