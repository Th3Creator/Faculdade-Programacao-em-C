#include <stdio.h> 
#include <stdio.h> 

// Parâmetro de Idade 

int main() {
    float idade;

    printf("Digite a sua idade:");
    scanf("%f", &idade);

    if ( idade < 13)
        printf("\nVoce e criança\n");
    else
        if( idade >= 13 && idade <= 15)
        printf("\nVOce e pré adolescente\n");
    else
        if( idade > 15 && idade <= 20)
        printf("\nVoce e dolescente\n");
    else
        printf("Você e adulto");
    return 0;
}
