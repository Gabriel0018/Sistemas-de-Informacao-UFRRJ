#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, grau, filme, total, c, avaliador, maior, menor; // variáveis de armazenamento de informações
    float media_otimo, avaliador_otimo, item_c; // variáveis de manipulação
    avaliador_otimo = media_otimo = item_c = 0;
    
    printf("Estreia do filme Star Wars! O programa calcula:\n\n-> Média das idades das pessoas que responderam ótimo\n-> Idade do espectador mais velho e mais novo\n-> Percentual das pessoas com mais de 10 anos de instrução que responderam péssimo\n");
    printf("\nInforme a quantidade total de pessoas que foram assistir ao filme: ");
    scanf("%d", &total);
    
    c = 1;
    
    for (c; c <= total; c++)
    {
        printf("\n%dᵃ pessoa\n", c);
        printf("Idade: ");
        scanf("%d", &idade);
        
        while (idade < 0)
        {
            printf("Idade (não existe idade negativa): ");
            scanf("%d", &idade);
        }
        
        printf("Grau de instrução, em anos: ");
        scanf("%d", &grau);
        
        while (grau < 0 || grau > idade)
        {
            printf("Grau de instrução, em anos (Não pode ser maior que a própria idade ou negativo): ");
            scanf("%d", &grau);
        }
        
        printf("Opinião sobre o filme\n(1)ótimo\n(2)regular\n(3)péssimo\n");
        printf("Opção: ");
        scanf("%d", &avaliador);
        
        while (avaliador != 1 && avaliador != 2 && avaliador != 3)
        {
            printf("\n");
            printf("Opinião sobre o filme:\n(1)ótimo\n(2)regular\n(3)péssimo\n");
            printf("Opção (selecione número 1, 2 ou 3): ");
            scanf("%d", &avaliador);
        }
        
        printf("\n");
        
        // Item a
        if (avaliador == 1)
        {
            avaliador_otimo += 1;
            media_otimo = media_otimo + idade;
        }
        
        // Item b
        if (c == 1)
        {
            menor = maior = idade;
        }
        
        if (idade > maior)
        {
            maior = idade;
        }
        
        if (idade < menor)
        {
            menor = idade;
        }
        
        // Item c
        
        if (grau > 10 && avaliador == 3)
        {
            item_c = item_c + 1;
        }
    }

    if (total <= 0)
    {
        printf("\nNenhuma pessoa foi assistir ao filme!");
        exit(0);
    }
    
    if (media_otimo > 0)
    {
        printf("a) A média das idades das pessoas que responderam ótimo = %.2f \n\n", media_otimo / avaliador_otimo);
    }
    else
    {
        printf("a) Não teve pessoas que responderam ótimo\n\n");
    }
    
    if (maior == menor)
    {
        printf("b) Não teve espectador mais velho ou mais novo, todos tiveram idade = %d anos\n\n", maior);
    }
    
    else
    {
        printf("b) Espectador mais velho = %d anos\n   Espectador mais novo = %d anos \n\n", maior, menor);
    }
    
    if (item_c > 0){
        printf("c) Percentual de pessoas com mais de 10 anos de instrução que responderam péssimo = %.2f%%", (item_c / total) * 100);
    }
    
    else
    {
        printf("c) Não teve pessoas com mais de 10 anos de instrução que responderam péssimo");
    }
    return 0;
}


