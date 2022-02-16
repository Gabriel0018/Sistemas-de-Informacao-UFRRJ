#include <stdio.h>

int main()
{
    int n, c;
    c = 100;
    printf("O programa calcula todos os múltiplos do intervalo de [0, 100]\nInforme um número entre 0 e 10: ");
    scanf("%d", &n);
    
    while (n < 0 || n > 10) 
    {
        printf("Informe um número entre 0 e 10: ");
        scanf("%d", &n);
    }
    if (n == 0)
    {
        printf("\nNão existe múltiplos de zero!");
    }
    else 
    {
        printf("\nMúltiplos = ");
    }

    for (c; c >= 0; c--)
    {   
        if (c == n)
        {
            printf("%d", c);
            break;
        }
        if (c % n == 0) 
        {
            printf("%d, ", c);
        }
    }
    printf(", %d", 0);
    
    return 0;
}
