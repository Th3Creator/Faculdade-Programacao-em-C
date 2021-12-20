#include <stdio.h> 
#include <stdio.h> 

// Estudo do scanf

int main() {
    // Mostrando o exemplo com o printf
    float raio, area, nqual;
    raio = 20;
    area = 3.14 * raio * raio;
    printf("\nArea do circulo: %.2f", area);
    // esse .2 é o número de casa decimal após a vírgula

    //Exemplo agora utilizando o scanf

    printf("\nDigite o raio do circulo: ");
    scanf("%f",&raio);
    printf("\nDigite o raio do nqual: ");  
    scanf("%f",&nqual);  
    area = 3.14 * raio * raio * nqual;
    printf("\nArea do circulo: %.4f", area);
    return 0;
    // Um printf vem sempre antes de um scanf, para poder dizer ao usuário o que se trata aquilo  
}

// Scanf é o futuro mermão