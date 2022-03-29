#include <stdio.h>

//---------------------Variavel global-------------------------
int SOMA_LINHA[3];

//-------------------Funcoes auxiliares-----------------------
void ler(int matriz_A[3][5]);
void soma(int matriz_A[3][5]);
void mostrar(int matriz_A[3][5]);
//-------------------------------------------------------------

//------------------------------------Funcao main-------------------------------
int main()
{   
    printf ("O programa le uma matriz 3x5 e mostra, em um vetor, a soma de todos os elementos de cada linha!\n\n");
    int matriz_A[3][5];
    
    ler(matriz_A);
    soma(matriz_A);
    mostrar(matriz_A);
    
    return 0;
}
//---------------------------Codigo das funcoes auxiliares----------------------
void ler(int matriz_A[3][5])
{   
    int l, c;
    for (l = 0; l < 3; l++){
        for (c = 0; c < 5; c++){
            printf("Elemento %d,%d: ", l, c);
            scanf("%d", &matriz_A[l][c]);
        }
    }
}

void soma(int matriz_A[3][5])
{
    int somador = 0, l, c;
    for (l = 0; l < 3; l++){
        for (c = 0; c < 5; c++){
            somador = somador + matriz_A[l][c];
        }
        SOMA_LINHA[l] = somador;
        somador = 0;
    }
}

void mostrar(int matriz_A[3][5])
{
    int l, c;
    printf("\nMatriz A:                                 Soma:\n");
    for (l = 0; l < 3; l++){
        for (c = 0; c < 5; c++){
            printf("[%5d] ", matriz_A[l][c]);
        }
        printf("= [%5d] ", SOMA_LINHA[l]);
        printf("\n");
    }
}

