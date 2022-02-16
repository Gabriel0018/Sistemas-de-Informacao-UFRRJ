#include <stdio.h>

int main()
{
    int n, c;
    c = 1;
    
    printf("O programa mostra todos os divisores dado um valor inteiro positivo ou zero (número negativo finaliza o programa)\n");
    printf("Digite o número: ");
    scanf("%d", &n);
    
    while (n >= 0)
    {   
        if (n == 0) 
        {
            printf("Zero não é divisor de nenhum número natural!");
        }
        else 
        {
            printf("Divisores = ");
        }
    
        for (c; c <= n; c++)
        {   
            if (n == c) 
            {
                printf("%d", c);
                break;
            }
            
            if (n % c == 0)
            {
                printf("%d, " , c);
            }
        }
        c = 1;
        printf("\n\nDigite o número: ");
        scanf("%d", &n);
    }
    printf("\nPrograma encerrado! Volte sempre.");
    
    return 0;
}
