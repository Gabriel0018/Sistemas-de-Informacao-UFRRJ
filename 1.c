#include <stdio.h>

//-----------------Funcoes auxiliares---------------------
void ler_vetor(int vetor[], int x);
void mostrar_vetor(int vetor[], int x);
void vetor_invertido(int vetor[], int x);
//---------------------------------------------------------

//------------------Funcao main-----------------------------
int main()
{   
    int vetor[20];
    printf("O programa mostra, dado input, um vetor de 20 valores inteiros e a ordem inversa!\n\n");
    
    ler_vetor(vetor, 20);
    mostrar_vetor(vetor, 20);
    vetor_invertido(vetor, 20);
}
//------------Codigo das funcoes auxiliares-----------------
void ler_vetor(int vetor[], int x)
{   
    int c = 0;
    for (c; c < 20; c++){
        printf("Posicao %d: ", c + 1);
        scanf("%d", &vetor[c]);
    }
}

void mostrar_vetor(int vetor[], int x)
{
    int c = 0;
    printf("\nVetor original: \n");
    for (c; c < 20; c++){
    
        printf("[%d] ", vetor[c]);
    }
    printf("\n");
}
void vetor_invertido(int vetor[], int x)
{
    int c = 19;
    printf("\nVetor invertido: \n");
    for (c; c >= 0; c--){
        printf("[%d] ", vetor[c]);
    }
}

