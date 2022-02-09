#include <stdio.h>

int main()
{   
    int i, x, n;
    printf("O programa desenha uma pirâmide! Digite um valor inteiro para o tamanho da pirâmide: ");
    scanf("%d", &n);
    printf("\n");
    
    for(i = 1; i <= n; i++)
    {   
        for (x = 1; x <= n - i + 35; x++)
        {
            printf(" ");
        }
        
        for (x = 1; x <= 2 * i - 1; x++)
        {   
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

