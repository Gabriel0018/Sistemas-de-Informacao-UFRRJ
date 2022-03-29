#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//------------------------Funcoes auxiliares----------------------------
void arremessos(int vetor[], int n);
int face1(int vetor[], int n);
int face2(int vetor[], int n);
int face3(int vetor[], int n);
int face4(int vetor[], int n);
int face5(int vetor[], int n);
int face6(int vetor[], int n);
int maximo(int vetor[], int n);
void mostrar(int vetor[], int n);
//---------------------------------------------------------------------

//--------------------------Funcao main--------------------------------
int main()
{   
    int n;
    printf("Digite a quantidade de arremessos: ");
    scanf("%d", &n);
    
    int vetor[n];
    
    arremessos(vetor, n);
    face1(vetor, n);
    face2(vetor, n);
    face3(vetor, n);
    face4(vetor, n);
    face5(vetor, n);
    face6(vetor, n);
    maximo(vetor, n);
    mostrar(vetor, n);
}
//-------------------Codigo das funcoes auxiliares----------------------
void arremessos(int vetor[], int n)
{   
    int c = 0;
    srand(time(NULL));
    printf("\nVetor: ");
    while (c < n){
        vetor[c] = 1 + rand() % 6;
        printf("[%d] ", vetor[c]);
        c += 1;
    }
    printf("\n\n");
}
int face1(int vetor[], int n)
{
    int c = 0;
    int a1 = 0;
    while( c < n){
        if (vetor[c] == 1){
            a1 += 1;
        }
        c += 1;
    }
    return a1;
}

int face2(int vetor[], int n)
{
    int c = 0; 
    int a2 = 0;
    while( c < n){
        if (vetor[c] == 2){
            a2 += 1;
        }
        c += 1;
    }
    return a2;
}

int face3(int vetor[], int n)
{
    int c = 0;
    int a3 = 0;
    while( c < n){
        if (vetor[c] == 3){
            a3 += 1;
        }
        c += 1;
    }
    return a3;
}

int face4(int vetor[], int n)
{
    int c = 0;
    int a4 = 0;
    while( c < n){
        if (vetor[c] == 4){
            a4 += 1;
        }
        c += 1;
    }
    return a4;
}

int face5(int vetor[], int n)
{
    int c = 0;
    int a5 = 0;
    while( c < n){
        if (vetor[c] == 5){
            a5 += 1;
        }
        c += 1;
    }
    return a5;
}

int face6(int vetor[], int n)
{
    int c = 0;
    int a6 = 0;
    while( c < n){
        if (vetor[c] == 6){
            a6 += 1;
        }
        c += 1;
    }
    return a6;
}

int maximo(int vetor[], int n)
{
    int maior = 0, c = 0;
    int a1 = face1(vetor, n), a2 = face2(vetor, n), a3 = face3(vetor, n);
    int a4 = face4(vetor, n), a5 = face5(vetor, n), a6 = face6(vetor, n);
    
    while(1){
        if (a1 > maior){
            maior = a1;
        }
        if (a2 > maior){
            maior = a2;
        }
        if (a3 > maior){
            maior = a3;
        }
        if (a4 > maior){
            maior = a4;
        }
        if (a5 > maior){
            maior = a5;
        }
        if (a6 > maior){
            maior = a6;
        }
        break;
    }
    return maior;
}

void mostrar(int vetor[], int n)
{   
    int a1 = face1(vetor,n), a2 = face2(vetor, n), a3 = face3(vetor, n);
    int a4 = face4(vetor, n), a5 = face5(vetor, n), a6 = face6(vetor, n);
    int maior = maximo(vetor, n);
    printf("Quantidade de vezes que apareceram as faces: \n");
    printf("Face 1 = %d\nFace 2 = %d\nFace 3 = %d\nFace 4 = %d\nFace 5 = %d\nFace 6 = %d\n\n", a1, a2, a3, a4, a5, a6);
    printf("Maior ocorrência das faces: \n");
    if (maior == a1){
        printf("Face 1 \n");
    }
    if (maior == a2){
        printf("Face 2 \n");
    }
    if (maior == a3){
        printf("Face 3 \n");
    }
    if (maior == a4){
        printf("Face 4 \n");
    }
    if (maior == a5){
        printf("Face 5 \n");
    }
    if (maior == a6){
        printf("Face 6 \n");
    }
}

