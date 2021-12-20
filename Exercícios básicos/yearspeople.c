#include <stdio.h> 
#include <stdio.h> 

int main () {
    int anodnascimento, anoaverificado, form;

    printf("Digite o ano em que voce nasceu:");
    scanf("%i", &anodnascimento);

    printf("\nDigite o ano atual ou o ano que voce queira verificar a sua idade:");
    scanf("%i", &anoaverificado);

    form = anoaverificado - anodnascimento;

    if (form < 4 )
    {
       printf("\nA sua idade no ano de %i e: %i. Logo voce e ou era um bb", anoaverificado, form);
    }
    else 
        if (form >= 4 && form <= 10)
        {
            printf("\nA sua idade no ano de %i e: %i. Logo voce e ou era uma crianca ", anoaverificado, form);
        }
    else 
        if (form >= 11 && form <= 18)
        {
            printf("\nA sua idade no ano de %i e: %i. Logo voce e ou era um adolescente", anoaverificado, form);
        }
    else 
        if (form >= 19 && form <= 50)
        {
            printf("\nA sua idade no ano de %i e: %i. Logo voce e ou era um adulto", anoaverificado, form);
        }
    else 
        if (form >= 51)
        {
            printf("\nA sua idade no ano de %i e: %i. Logo voce e ou era um idoso", anoaverificado, form);
        }

    return 0;
}