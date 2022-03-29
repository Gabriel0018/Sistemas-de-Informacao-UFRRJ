#include <stdio.h>

//-----------------------Funcoes auxiliares--------------------------------
void mostrar_vetor1 (int vetor1[], int x);
void mostrar_vetor2(int vetor2[], int x);
void intercalar_vetor3 (int vetor1[10], int vetor2[10], int vetor3[20]);
void mostrar_vetor3 (int vetor3[], int x);
void invertido_vetor3 (int vetor3[], int x);
//-------------------------------------------------------------------------

//------------------------Funcao main--------------------------------------
int main()
{   
    printf("O programa intercala os valores de vetor1 e vetor2 e mostra em um vetor3 e o vetor3 invertido!\n\n");
    int vetor1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int vetor2[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int vetor3[20];
    
    mostrar_vetor1(vetor1, 10);
    mostrar_vetor2(vetor2, 10);
    intercalar_vetor3(vetor1, vetor2, vetor3);
    printf("                                    Vetor 3\n");
    mostrar_vetor3(vetor3, 20);
    invertido_vetor3(vetor3, 20);
    
    return 0;
}
//--------------------Codigo das funcoes auxiliares------------------------------
void mostrar_vetor1 (int vetor1[], int x)
{   
    int a = 0;
    printf("Vetor 1: ");
    for (a; a < 10; a++){
        printf("[ %d] ", vetor1[a]);
    }
    printf("\n");
}

void mostrar_vetor2(int vetor2[], int x)
{
    int a = 0;
    printf("Vetor 2: ");
    for (a; a < 10; a++){
        printf("[%d] ", vetor2[a]);
    }
    printf("\n\n");
}

void intercalar_vetor3(int vetor1[10], int vetor2[10], int vetor3[20])
{
    int a = 0, b = 1, c = 0;
    while( a < 20){
        vetor3[a] = vetor1[c];
        while(1){
            vetor3[b] = vetor2[c];
            break;
        }
        a = a + 2;
        b = b + 2;
        c = c + 1;
    }
}

void mostrar_vetor3 (int vetor3[], int x)
{
    int a = 0;
    printf("  Normal : ");
    for (a; a < 20; a++){
        printf("[%d] ", vetor3[a]);
    }
    printf("\n");
}

void invertido_vetor3(int vetor3[], int x)
{
    int a = 19;
    printf("Invertido: ");
    for (a; a >= 0; a--){
        printf("[%d] ", vetor3[a]);
    }
}

