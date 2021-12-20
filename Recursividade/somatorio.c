#include <stdio.h> 
#include <stdio.h> 

int somatoriofunc (int number) {
    int resultado;

    if (number == 1) // essa condição falsa aqui que faz a função parar
    {
       return 1;
    }
    else 
    {
        resultado = number + somatoriofunc(number -1);
    }
    return resultado;
}


int main() {
    int number, somatorio;

    printf("Digite o numero que vai desejar o somatorio de 1 a N:");
    scanf("%i", &number);

    somatorio = somatoriofunc(number); // A variável somatório ta chamando a função somatório.

    printf("\nO somatorio dos numeros de 1 ate %i = %i", number, somatorio);
    return 0;
}