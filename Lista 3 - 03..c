//1 caso: m  par - mostrar todos os divisores
//2 caso: m impar menor que 10 - mostrar fatorial
//3 caso: m for maior ou igual a 10 - soma dos inteiros de 1 até m
#include <stdio.h>

int main()
{   
    int m = 1; 
    int leitor;
    while(m >= 1){
        
        printf("Digite valor inteiro e positivo para m (negativo ou zero encerra o programa): ");
        scanf("%d", &m);
    //Caso 1: m eh par => Entao devo mostrar todos os divisores de m
        if (m % 2 == 0 && m > 0){
            int m_par_divisor(int x);
            printf("%d", m_par_divisor(m));
    }
    //Caso 2: m eh impar  e menor que 10 => Então devo mostrar o fatorial de m
        else if (m % 2 != 0 && m < 10 && m > 0 ){
            int fatorial(int x);
            int ifatorial(int x);
            printf("Fatorial = %d => Usando funcao recursiva\n", fatorial(m));
            printf("Fatorial = %d => Utilizando funcao com for", ifatorial(m));
    }
    //Caso 3: m eh impar e maior ou igual a 10 => Então devo mostrar a soma dos inteiros de 1 ate m
        else if (m % 2 != 0 &&  m >= 10){
            int somador(int x);
            printf("A soma dos valores compreendidos entre 1 ate %d = %d", m, somador(m));
    }
        printf("\n\n");
    }
    printf("Programa encerrado! Volte sempre");
    return 0;
}
//Funcao do caso 1
int m_par_divisor(int x)
{   
    int c = 1;
    
    printf("Divisores: ");
    
    for (c; c < x; c++){
        if (x % c == 0){
            printf("%d, ", c);
        }
    }
    return x;
}

//Funcao do caso 2 - Fatorial utilizando funcao RECURSIVA
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

//Funcao do caso 2 - Fatorial Utilizando funcao com for
int ifatorial(int x)
{
    int resultado = x;
    int c = 1;
    
    for (c; c < x; c++){
        resultado = resultado * c; 
    }
    return resultado;
}
//Funcao do caso 3 - Somador dos inteiros de 1 ate m
int somador(int x)
{
    int resultado = 0;
    int c = 1;
    for (c; c <= x; c++){
        resultado = resultado + c;
    }
    return resultado;
}
