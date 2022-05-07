#include <stdio.h>

//------------------Funcoes auxiliares----------------
void ler(int vetor[], int n);
void mostrar(int vetor[], int n);
int maximo(int vetor[], int n);
void mostrar_maior(int vetor[], int n);
//-----------------------------------------------------

//-------------------Funcao main-----------------------
int main()
{   
    int n;
    printf("Quantos numeros ira ter no conjunto?: ");
    scanf("%d", &n);
    int vetor[n];
    
    ler(vetor, n);
    mostrar(vetor, n);
    maximo(vetor, n);
    mostrar_maior(vetor, n);   
    
    return 0;
}
//---------------Codigo das funcoes auxiliares--------------------
void ler(int vetor[], int n)
{   
    int c = 0;
    for (c; c < n; c++){
        printf("Valor %d: ", c + 1);
        scanf("%d", &vetor[c]);
    }
    printf("\n");
}
void mostrar(int vetor[], int n)
{   
    int c = 0;
    printf("Vetor: ");
    for (c; c < n; c++){
        printf("[%d] ", vetor[c]); 
    }
}
    
int maximo(int vetor[], int n)
{
    int c = 1;
    int maior = vetor[0];
    for (c; c < n; c++){
        if (vetor[c] > maior){
            maior = vetor[c];
        }
    }
    return maior;
}

void mostrar_maior(int vetor[], int n)
{   
    int maior = maximo(vetor, n);
    int c = 0, somador = - 1;
    
    for (c; c < n; c++){
        if (vetor[c] == maior){
            somador += 1;
        }
    }
    printf("\nMaior termo = %d\n", maior);
    printf("Quantidade de valores iguais ao maior termo = %d", somador);
}

