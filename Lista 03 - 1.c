#include <stdio.h>
#include <math.h>

int main()
{   
    int leitor;
    printf("Calculadora de funcoes recursivas!\n\n");
    
    while (1){
        printf("(1)Fatorial\n(2)Exponenciacao\n(3)Multiplicacao\n(4)Operacao módulo\n(5)Sequencia Fibonnaci\n(6)Fim\n");
        printf("Escolha: ");
        scanf("%d", &leitor);
        
        if (leitor == 1){
            int fat;
            printf("Digite o valor: ");
            scanf("%d", &fat);
            
            while (fat < 0){
                printf("Digite o valor (não pode ser negativo): ");
                scanf("%d", &fat);
            }
            
            int fatorial(int fatorial);
            printf("Fatorial = %d\n\n",fatorial(fat));
        }
        
        if (leitor == 2){
            float elevado;
            int expoente;
            printf("Digite o valor: ");
            scanf("%f", &elevado);
            printf("Digite o expoente: ");
            scanf("%d", &expoente);
            
            float exponenciacao(int x, int y);
            printf("Exponenciacao = %.2f\n\n", exponenciacao(elevado, expoente));
        }
        
        if (leitor == 3){
            float n1, n2;
            printf("Digite o primeiro valor: ");
            scanf("%f", &n1);
            printf("Digite o segundo valor: ");
            scanf("%f", &n2);
            
            float multiplicacao(float x, float y);
            printf("Multiplicacao = %.2f\n\n", multiplicacao(n1, n2));
        }
        
        if (leitor == 4){
            int numerador, denominador;
            printf("Digite o numerador: ");
            scanf("%d", &numerador);
            printf("Digite o denominador: ");
            scanf("%d", &denominador);
            
            int mod(int x, int y);
            printf("Mod(Resto da divisao) = %d\n\n", mod(numerador, denominador));
        }
        
        if (leitor == 5){
            int n;
            printf("Digite o termo que deseja saber da sequencia: ");
            scanf("%d", &n);
            
            while (n < 0){
                printf("Digite o termo que deseja saber da sequencia (não pode ser negativo): ");
                scanf("%d", &n);
            }

            int fib(int x);
            printf("Sequencia Fibonnaci = %d\n\n", fib(n));
        }
        if (leitor == 6){
            printf("\nPrograma encerrado! Volte sempre");
            break;
        }
        printf("\n");
    }
}

//Calculadora: Operacao 1

int fatorial(int x)
{
    int resultado;
    
    if (x == 0){
        resultado = 1;
    }
    else{
        resultado = x * fatorial(x - 1);
    }
    return resultado;
}

//Calculadora: Operacao 2

float exponenciacao(int x, int y)
{   
    float resultado;
    if (y == 0){
        resultado = 1;
    }
    else{
        resultado = x * exponenciacao (x, y - 1);
    }
    return resultado;
}

//Calculadora: Operacao 3

float multiplicacao(float x, float y)
{   
    float resultado;
    if (y == 0){
        resultado = 0;
    }
    else{
    resultado = x + multiplicacao(x , y - 1);
    }
    return resultado;
}

//Calculadora: Operacao 4

int mod(int x , int y)
{
    int resultado;
    if (x > y){
        resultado = mod(x - y, y);
    }
    else if (x < y){
        resultado = x;
    }
    else if (x == y){
        resultado = 0;
    }
    return resultado;
}

//Calculadora: Operacao 5

int fib(int x)
{   
    if (x <= 1){
        return x;
    }
    else{
        return fib(x - 1) + fib(x - 2);
    }
}
