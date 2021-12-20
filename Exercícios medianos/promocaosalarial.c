#include <stdio.h> 
#include <stdio.h> 


int main () {
    int salario, opc;
    float form, form2;

    printf("Digite o valor do seu salario:");
    scanf("%i", &salario);

    printf("\nDigite 1 caso trabalhe a um ano ou digite 2 caso trabalhe a dois anos:");
    scanf("%i", &opc);

    if (opc == 1)
    {
        form = salario * 0.1;
    }
    else 
        if (opc == 2)
        {
            form = salario * 0.2;
        }
    else
    {
        printf("\nDigite apenas as opcoes sugeridas, que são de 1 ano ou 2");
    }
    
    form2 = form + salario;

    printf("\nO valor do salario reajustado e: %0.f", form2);
    return 0;
}