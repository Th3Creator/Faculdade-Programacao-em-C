#include <stdio.h> 
#include <stdio.h> 


int multiplicacao(int number) {
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return(number*multiplicacao(number-1));
    }
    
    

}

int main () {
    int number, resultado;

    printf("Digite o numero que deseja saber:");
    scanf("%i", &number);

    resultado = multiplicacao(number);

    printf("\nO resultado da multiplicacao e: %i", resultado);
    return 0;
}