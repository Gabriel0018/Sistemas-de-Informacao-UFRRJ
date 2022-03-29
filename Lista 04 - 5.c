#include <stdio.h>

//-----------------Funcoes auxiliares----------------------
void ler(float matriz_M[4][5]);
void mostrar_inicial(float matriz_M[4][5]);
void matriz_dobro(float matriz_M[4][5]);
void matriz_soma(float matriz_M[4][5]);
//----------------------------------------------------------

//-------------------Funcao main----------------------------
int main()
{   
    printf("O programa mostra: matriz inicial, dobro da matriz e a uma matriz com a matriz inicial + dobro da matriz!\n\n");
    float matriz_M[4][5];
    
    ler(matriz_M);
    mostrar_inicial(matriz_M);
    matriz_dobro(matriz_M);
    matriz_soma(matriz_M);
    
    return 0;
}
// --------------Codigo das funcoes auxiliares---------------
void ler(float matriz_M[4][5])
{   
    int l, c;
    for (l = 0; l < 4; l++){
        for (c = 0; c < 5; c++){
            printf("Elemento %i,%i: ", l, c);
            scanf("%f", &matriz_M[l][c]);
        }
    }
}

void mostrar_inicial(float matriz_M[4][5])
{   
    int l, c;
    printf("\nMatriz M: \n");
    for (l = 0; l < 4; l++){
        for (c = 0; c < 5; c++){
            printf("[%7.2f] ", matriz_M[l][c]);
        }
        printf("\n");
    }
}

void matriz_dobro(float matriz_M[4][5])
{   
    int l, c;
    printf("\nMatriz dobro: \n");
    for(l = 0; l < 4; l++){
        for (c = 0; c < 5; c++){
            printf("[%7.2f] ", matriz_M[l][c] * 2);
        }
        printf("\n");
    }
}

void matriz_soma(float matriz_M[4][5])
{   
    int l, c;
    printf("\nMatriz soma: \n");
    for(l = 0; l < 4; l++){
        for (c = 0; c < 5; c++){
            printf("[%7.2f] ", (matriz_M[l][c] * 2) + matriz_M[l][c]);
        }
        printf("\n");
    }
}

