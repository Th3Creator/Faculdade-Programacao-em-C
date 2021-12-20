#include <stdio.h> 
#include <stdio.h> 

int main() {
    int n1, n2, c;

    printf("Digite o valor do primeiro numero:");
    scanf("%i", &n1);

    printf("\nDigite o valor do segundo numero:");
    scanf("%i", &n2);

    if (n1 > n2)
    {
       while (n2 != n1)
       {
           printf("\n%i", n2++);
       }
    }
    else 
        if (n2 > n1)
        {
            while (n1 != n2)
       {
           printf("\n%i", n1++);
       } 
        }
        
    

    return 0;
}