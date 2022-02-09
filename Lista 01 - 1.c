#include <stdio.h>

int main()
{
    int n, maior, menor;
    float media, soma, c;
    soma = c = 0;
    
    printf("O programa calcula: quantidade de valores digitados, média, soma, maior e menor valor - considere 999 como FLAG\n(Apenas para parar o programa, não será considerado como um valor)\n\n");
    printf("Digite números inteiros, 999 para parar: ");
    scanf("%d", &n);
    
    if (n == 999)
    {
        printf("Não foram digitados nenhum valor!");
    }
    else 
    {
        soma = soma + n;
        c = c + 1;
    }
    
    if (n != 999)
    {
        maior = n;
        menor = n;
        
        while(1)
        {
            printf("Digite números inteiros, 999 para parar: ");
            scanf("%d", &n);
        
        if (n == 999)
        {
            break;
        }
        else
        {
            soma = soma + n;
            c = c + 1;
            
            if (n > maior)
            {
                maior = n;
            }
            if (n < menor)
            {
                menor = n;
            }
        }
        }
        media = soma / c;
        printf("\nQuantidade de valores digitados = %.0f\nSoma = %.0f\nMédia = %.2f\n", c, soma, media);
        printf("Maior valor digitado = %d\nMenor valor digitado = %d", maior, menor);
    }
    }
