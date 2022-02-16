#include <stdio.h>

int main()
{
    int grupo21, idade, contador;
    float media60;
    
    grupo21 = media60 = contador = 0;
    
    printf("O programa calcula: Quantidade de pessoas que tenham mais de 21 anos; Média das pessoas com mais de 60 anos\n(Digitar uma idade negativa finaliza o cadastramento das idades)\n");
    printf("\nIdade: ");
    scanf("%d", &idade);
    
    while (idade >= 0)
    {
        if (idade > 21)
        {
            grupo21 += 1;
        }
        
        if (idade > 60)
        {
            media60 += idade;
            contador += 1;
        }
        printf("Idade: ");
        scanf("%d", &idade);
        
    }
    printf("\nQuantidade de pessoas acima de 21 anos = %d", grupo21);
    printf("\nMédia da idade das pessoas acima de 60 anos = %.2f", media60 / contador);
    
    return 0;
}
