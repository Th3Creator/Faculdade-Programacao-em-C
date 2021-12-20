#include <stdio.h> 
#include <stdio.h> 

#define nmaxvetor 24

// Empresa de Ônibus

int main () {
    int opcselecionada,opcselecionada2, vetoracen[nmaxvetor], vetoracen2[nmaxvetor], npoltrona, c, c2;

    for (c = 0; c < nmaxvetor; c++)
    {
       vetoracen[c] = 0;
       vetoracen2[c] = 0;
    }   

    printf("Lembrando sempre que os acentos vazios estao preenchidos por 0, e o que ja estao sendo usados estao preenchidos por 1");
    
    for (c2 = 2; c2 > 1; c2++)
    {
        npoltrona = 0;
        opcselecionada2 = 0;

        printf("\nMenu de opcoes:\n 1 - Comprar uma passagem\n 2 - Mapa de ocupacaoo do onibus\n 3 - Encerrar o programa \n\n Digite o numero que atende a sua necessidade:");
        scanf("%i", &opcselecionada);

     /* Venda da passagem*/if (opcselecionada == 1)
    {
        printf("\nDigite 1 caso o senhor queira um acento na janela\nDigite 2 caso o senhor queira um acento no corredor");
        scanf("%i", &opcselecionada2);

        printf("\nDigite agora o número da poltrona");
        scanf("%i", &npoltrona);
    }
    else 
       /* Mapa de ocupação*/ if (opcselecionada == 2)
        {
            printf("Ola Senhor esses sao os acentos disponiveis na janela, todos os acentos que estao o numero 2 estao livres:");
            for (c = 0; c < nmaxvetor; c++)
            {
               printf("\n%i", vetoracen[c]);
            }

            printf("\n\nOla Senhor esses sao os acentos disponiveis no corredor, todos os acentos que estao o numero 2 estao livres:");
            for (c = 0; c < nmaxvetor; c++)
            {
               printf("\n%i", vetoracen2[c]);
            }
            
        }
    else 
        if (opcselecionada == 3) {
            c2 = 0;
        }

    // Janela
    if (opcselecionada2 == 1)
    {
       if (vetoracen[npoltrona] == 1)
       {
           printf("Me desculpe mas esse acento ja esta ocupado");
       }
       else 
            if (vetoracen[npoltrona] == 0) {
           printf("Compra realizada com sucesso");
           vetoracen[npoltrona] = 1;
       }
            

    // Corredor
    }
    else  
        if (opcselecionada2 == 2)
        {
            if (vetoracen2[npoltrona] == 1)
            {
                 printf("Me desculpe mas esse acento ja esta ocupado");
            }
            else 
                if (vetoracen2[npoltrona] == 0) {
                printf("Compra realizada com sucesso");
                vetoracen2[npoltrona] = 1;
            }
        }
    }
    

   
        

    return 0;
}

/* 
O que fazer?

E S P E C I F I C A Ç Õ E S
Controlar o número de pessoas no ônibus e o acento que eles estão ocupando

Todo ônibus tem 48 lugares (24 janelas e 24 corredores)
Dois vetores de 24 posições cada que representam os acentos
Quando o acento estiver ocupado deverá ser ocupado por 1 e se não deverá ser ocupado por 0

Meno de opções:
1 - Vender passagem {
    Deverá se perguntado também se o usuário deseja janela ou corredor e o número da poltrona, mostrando as opções:
    a) Venda efetivada - se a poltrona solicitada estiver livre. E marcar a poltrona como vendida
    b) Poltrona ocupada - se a poltrona solicitada não estiver disponível para venda.
    c) Ônibus lotado - se não tiverem mais lugares disponíveis.
}
2 - Mostrar mapa de ocupação do ônibus {
    deverá mostrar uma lista indicando qual lugar está livre e qual está ocupado
}
3 - Encerrar {
    Programa deverá ser encerrado
}

C Ó D I G O
1° Declarar as variáveis e vetores 

2° Menu de opções {
    Usar a condicional 
}




*/