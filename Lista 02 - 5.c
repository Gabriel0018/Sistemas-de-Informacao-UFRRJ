#include <stdio.h>

int main()
{   
    int n, impar, menor, maior, total;
    float medimpar, par;
    total = par = impar = medimpar =0;
    printf("O programa calcula:\n-> Quantidade de números válidos lidos\n-> Percentual de números pares\n-> Média dos números ímpares\n-> O maior e o menor valor lido\n** (Digitar valor negativo sai do programa e ele não é contabilizado - FLAG)\n\n");
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    
    if (n >= 0 )
    {
        menor = maior = n;
    }
    else
    {
        printf("\nNão foram digitados nenhum valor válido para efetuar os cálculos! Volte sempre.");
    }
    
    while (1)
    {
        if (n < 0)
        {
            break;
        }
        
        total += 1;
        
        if (n % 2 == 0)
        {   
            par += 1;
        }
        
        else
        {
            impar += 1;
            medimpar += n;
        }
        
        if (n > maior)
        {
            maior = n;
        }
        if (n < menor)
        {
            menor = n;
        }
        printf("Digite um valor inteiro: ");
        scanf("%d", &n);
    }
    
    if (par > 0 && impar > 0 )
    {
        printf("\na) Quantidade de números válidos = %d\n", total);
        printf("\nb) Percentual de números pares = %.2f%%\n", (par / total) * 100);
        printf("\nc) Média dos números ímpares = %.2f\n", medimpar / impar);
        printf("\nd) Maior valor lido = %d\n   Menor valor lido = %d", maior, menor);
    }
    
    else if (par > 0)
    {
        printf("\na) Quantidade de números válidos = %d\n", total);
        printf("\nb) Percentual de números pares = %.2f%%\n", (par / total) * 100);
        printf("\nc) Média dos números ímpares = Não foram digitados valores ímpares\n");
        printf("\nd) Maior valor lido = %d\n   Menor valor lido = %d", maior, menor);
    }
    else if (impar > 0)
    {
        printf("\na) Quantidade de números válidos = %d\n", total);
        printf("\nb) Percentual de números pares = Não foram digitados valores pares\n");
        printf("\nc) Média dos números ímpares = %.2f\n", medimpar / impar);
        printf("\nd) Maior valor lido = %d\n   Menor valor lido = %d", maior, menor);
    }
    return 0;
}
