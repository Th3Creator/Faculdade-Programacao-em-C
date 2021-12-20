#include <stdio.h> 
#include <stdio.h> 

int main () {
    int var1,var2;

    printf("Digite o valor da primeira variavel:");
    scanf("%i", &var1);

    printf("\nDigite o valor da segunda variavel:");
    scanf("%i", &var2);

    if (var1 > var2)
    {
        printf("%i", var1);
    }
    else
    {
        printf("%i", var2);
    }
    
    

    return 0;
}