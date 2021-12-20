#include <stdio.h> 
#include <stdio.h> 

// Teste de mesa em relação aos diferentes grupos de uma sala

int main() {
    float numImpressoes1, numImpressoes2, numImpressoes3, contador1, contador2, contador3;

    printf("\nQuantas vezes deve alertar a fazer o teste de mesa ao aluno atento:");
    scanf("%f", &numImpressoes1);

    contador1 = 0;

    while (contador1 < numImpressoes1)
    {
        printf("\nFACA O TESTE DE MESA MEU NOBRE!\n");
        contador1++; // Soma 1 a variável
    }
    

    //                                       //                                        //


    printf("\nQuantas vezes deve alertar a fazer o teste de mesa ao aluno nao tao atento quanto o primeiro:");
    scanf("%f", &numImpressoes2);

    contador2 = 0;

    while (contador2 < numImpressoes2)
    {
       printf("\nFACA O TESTE DE MESA MEU NOBRE!!\n");
       contador2++;
    }


    //                                       //                                        //


    printf("\nQuantas vezes deve alertar a fazer o teste de mesa ao aluno desatento:");
    scanf("%f", &numImpressoes3);

    contador3 = 0;

    while (contador3 < numImpressoes3)
    {
        printf("\nFACA O TESTE DE MESA MEU NOBRE!!!\n");
        contador3++;
    }
    return 0;
}
