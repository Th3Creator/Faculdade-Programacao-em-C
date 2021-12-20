#include <stdio.h> 
#include <stdio.h> 

// Cálculo de IMC (Índice de Massa Corporal )

int main() {
    float form, peso, altura, altura2;

    printf("\nDigite o seu peso:");
    scanf("%f",&peso);

    printf("Digite a sua altura:");
    scanf("%f",&altura);

    altura2 = altura * altura;
    form= peso / altura2;

    printf("\nSeu IMC e:%0.f\n", form);

    printf("\nVeja a tabela em: http://g1.globo.com/rio-de-janeiro/noticia/2010/10/saiba-como-calcular-o-indice-de-massa-corporal-imc.html\n");
    return 0;
}
