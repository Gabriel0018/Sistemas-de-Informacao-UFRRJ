#include <stdio.h>
#include <math.h>
int main()
{   
    float n1, n2, soma, sub, mult, divi, expo, loga, raiz;
    int leitor;
    
    printf("Calculadora! Digite o número correspondente à operação desejada \n(A calculadora considera sempre o primeiro valor pelo segundo e aproximação de 2 casas decimais)\n\n");
    printf("(1)Soma\n(2)Subtração\n(3)Multiplicação\n(4)Divisão\n(5)Exponenciação\n(6)Logaritmo natural\n(7)Raiz quadrada\n(8)Sair do programa\n");
    printf("Escolha: ");
    scanf("%d", &leitor);
    
    while (1)
    {
        if (leitor == 1)
        {       
            printf("\nPrimeiro número: ");
            scanf("%f", &n1);
            printf("Segundo número: ");
            scanf("%f", &n2);
            soma = n1 + n2;
            printf("Soma = %.2f\n", soma);
        }
        else if (leitor == 2)
        {       
            printf("\nPrimeiro número: ");
            scanf("%f", &n1);
            printf("Segundo número: ");
            scanf("%f", &n2);
            sub = n1 - n2;
            printf("Subtração = %.2f\n", sub);
        }
        else if (leitor == 3)
        {       
            printf("\nPrimeiro número: ");
            scanf("%f", &n1);
            printf("Segundo número: ");
            scanf("%f", &n2);
            mult = n1 * n2;
            printf("Multiplicação = %.2f\n", mult);
        }
        else if (leitor == 4)
        {       
            printf("\nPrimeiro número: ");
            scanf("%f", &n1);
            printf("Segundo número: ");
            scanf("%f", &n2);
            divi = n1 / n2;
            printf("Divisão = %.2f\n", divi);
        }
        else if (leitor == 5)
        {
            printf("\nNúmero que será elevado: ");
            scanf("%f", &n1);
            printf("Quantidade de vezes que será elevado: ");
            scanf("%f", &n2);
            printf("Exponenciação = %.2f", pow(n1, n2));
        }
        else if (leitor == 6)
        {
            printf("\nDigite o número: ");
            scanf("%f", &loga);
            printf("Logaritmo natural = %.2f", log(loga));
        }
        else if (leitor == 7)
        {
            printf("\nDigite o número: ");
            scanf("%f", &raiz);
            printf("Raiz quadrada = %.2f", sqrt(raiz));
        }
        else if (leitor == 8)
        {   
            printf("\nFim do programa! Volte sempre");
            break;
        }
            
        printf("\n\n(1)Soma\n(2)Subtração\n(3)Multiplicação\n(4)Divisão\n(5)Exponenciação\n(6)Logaritmo natural\n(7)Raiz quadrada\n(8)Sair do programa\n");
        printf("Escolha: ");
        scanf("%d", &leitor);
    }       
    return 0;
}
