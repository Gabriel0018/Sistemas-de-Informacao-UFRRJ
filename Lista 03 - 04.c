#include <stdio.h>
#include <math.h>

int main()
{
    float x = 1;
    printf("O programa utiliza aproximacao de duas casas decimais!\n\n");
    while(1){
        printf("Digite o valor de x (negativo ou zero encerra o programa): ");
        scanf("%f", &x);
        
//Caso 1: Se x maior ou igual a 10, então retornar: raiz de x - 10 dividido por 2
        if (x >= 10){
            float maior_igual_10(float x);
            printf("Resultado = %.2f\n\n", maior_igual_10(x));
        }
//Caso 2: Se x menor que 10 e maior que 4, então retornar: x elevado a três dividido por x elevado a dois - 16
        else if ( x < 10 && x > 4){
            float maior_4_menor_10(float x);
            printf("Resultado = %.2f\n\n", maior_4_menor_10(x));
        }
//Caso 3: Se x menor ou igual a 4, e sabendo que o programa deve encerrar em 0 ou negativo, então retornar:
                                                        //raiz de x elevado ao quadrado + 1 dividido por 2
        else if ( x <= 4 && x > 0){
            float menor_igual_4(float x);
            printf("Resultado = %.2f\n\n", menor_igual_4(x));
        }
        //Quando não se aplica a nenhum caso, então é hora de encerrar o programa
        else{
            printf("\nPrograma encerrado! Volte sempre");
            break;
        }
    }
    return 0;
}
//Funcao caso 1
float maior_igual_10(float x)
{
    return sqrt(x - 10) / 2;
}
//Funcao caso 2
float maior_4_menor_10(float x)
{
    return (x * x * x) / ((x * x) - 16);
}
//Funcao caso 3
float menor_igual_4(float x)
{
    return sqrt((x * x) + 1) / 2;
}
