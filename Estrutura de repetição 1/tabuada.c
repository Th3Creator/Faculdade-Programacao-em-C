#include <stdio.h> 
#include <stdio.h> 

// Tabuada

int main() {
    float numero, tabuada1, tabuada2, tabuada3, tabuada4, tabuada5, tabuada6, tabuada7, tabuada8, tabuada9, tabuada10;

    while (numero != 0 && numero <= 10)
    {
        printf("Digite o valor do número para ser impresso na tabuada:");
        scanf("%f", &numero);

        tabuada1 = numero * 1;
        tabuada2 = numero * 2;
        tabuada3 = numero * 3;
        tabuada4 = numero * 4;
        tabuada5 = numero * 5;
        tabuada6 = numero * 6;
        tabuada7 = numero * 7;
        tabuada8 = numero * 8;
        tabuada9 = numero * 9;
        tabuada10 = numero * 10;


       printf(" %0.f x 1 = %0.f \n %0.f x 2 = %0.f \n %0.f x 3 = %0.f \n %0.f x 4 = %0.f \n %0.f x 5 = %0.f \n %0.f x 6 = %0.f \n %0.f x 7 = %0.f \n %0.f x 8 = %0.f \n %0.f x 9 = %0.f \n %0.f x 10 = %0.f \n", numero, tabuada1, numero, tabuada2, numero, tabuada3, numero, tabuada4, numero, tabuada5, numero, tabuada6, numero, tabuada7, numero, tabuada8, numero, tabuada9, numero, tabuada10);
    }
    return 0;
}
