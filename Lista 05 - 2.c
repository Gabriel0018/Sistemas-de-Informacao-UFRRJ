#include <stdio.h>
#include <stdlib.h>

//----------Funcoes auxiliares------------------
void ler (int *vet);
void copia (int *copia, int *original);
void zeraPares (int *vet); //2.a
void dobra (int *vet); //2.b
void soma (int *vet1, int *vet2); //2.c
//------------Funcao main----------------------
int main()
{   
    printf("Vetor 1 \n");
    int vet_a[30];
    ler(vet_a);
    
//-------copias de vetor---------
    int vet_b[30];
    copia(vet_b, vet_a);
    
    int vet_c[30];
    copia(vet_c, vet_a);
//-------------------------------

    zeraPares(vet_a);
    dobra(vet_b);
    
    printf("\nVetor 2 \n");
    int vet_2c[30];
    ler(vet_2c);
    
    soma(vet_c, vet_2c);
    
    return 0;
}
//------Codigo das funcoes auxiliares---------
void ler (int *vet)
{   
    int i = 0;
    for (i = 0; i < 30; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
}
void copia (int *copia, int *original)
{
    int i;
    for (i = 0; i < 30; i++){
        copia[i] = original[i];
    }
}
void zeraPares (int *vet)
{   
    int i;
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Questao 2.a\n\n");
    printf("Vetor zeraPares: \n");
    for (i = 0; i < 30; i++){
        if (vet[i] % 2 == 0){
            vet[i] = 0;
        }
        printf("[%d] ", vet[i]);
    }
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}
void dobra (int *vet)
{
    int i;
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Questao 2.b\n\n");
    printf("Vetor dobrado: \n");
    for (i = 0; i < 30; i++){
        vet[i] = vet[i] * 2;
        printf("[%d] ", vet[i]);
    }
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}
void soma (int *vet1, int *vet2)
{
    int i;
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Questao 2.c\n\n");
    printf("(Observacao: Considerei como par a forma visual como o usuário entenderia o programa, ou seja, o primeiro termo sendo o primeiro, e não zero)\n\n");
    printf("Vetor soma indices pares: \n");
    for (i = 0; i < 30; i ++){
        if ((i + 1) % 2 == 0){
            vet1[i] = vet1[i] + vet2[i];
        }
        else{
            vet1[i] = vet1[i];
        }
        printf("[%d] ", vet1[i]);
    }
}
