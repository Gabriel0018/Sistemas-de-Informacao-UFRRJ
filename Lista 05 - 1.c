#include <stdio.h>
#include <stdlib.h>

//------------Funcoes auxiliares-----------------------
void copia (char *str_copia, char *str_original);
void maiusculas (char *str); // 1.a
char *concatena(char *str_a, char *str_b, char *str_c); // 1.b
int capitalize (char *str); // 1.c
int compara (char *str1, char *str2); // 1.d
//-----------------------------------------------------

//----------------------FUNCAO MAIN-----------------------------
int main (void)
{   
    printf("O programa suporta no maximo 30 caracteres para cada string!\n\n");
    
    char nome1_a[32];
    printf("String 1: ");
    fgets(nome1_a, 32, stdin);
    
    char nome2_a[32];
    printf("String 2: ");
    fgets(nome2_a, 32, stdin);
    
    
//----------Copias do vetor original---------------
    char nome1_b[32];  
    copia(nome1_b, nome1_a);
    
    char nome2_b[32];
    copia (nome2_b, nome2_a);
    
    char nome1_c[32];
    copia(nome1_c, nome1_a);
    
    char nome2_c[32];
    copia(nome2_c, nome2_a);
    
//--------------Vetor 3--------------------------    
    char nome3_b[3];
//-----------------------------------------------

    maiusculas(nome1_a);
    maiusculas(nome2_a);
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Questao 1.a\n\n");
    printf("Maiusculas string 1 => %s\n", nome1_a);
    printf("Maiusculas string 2 => %s\n", nome2_a);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    
    concatena(nome1_b, nome2_b, nome3_b);
    printf("Questao 1.b\n\n");
    printf("Concatenada string 3 => %s\n\n", nome3_b);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    
    capitalize(nome1_c);
    printf("Questao 1.c\n\n");
    printf("Capitalizada string 1 => %s\n", nome1_c);
    printf("Tamanho = %d\n\n", capitalize(nome1_c));
    capitalize(nome2_c);
    printf("Capitalizada string 2 => %s\n", nome2_c);
    printf("Tamanho = %d\n\n", capitalize(nome2_c));
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    
    printf("Questao 1.d\n\n");
    printf("Comparacao => %d", compara(nome1_c, nome2_c));
    
    return 0;
}
//-------------Codigo da funcao auxiliar---------------
void copia (char *str_copia, char *str_original)
{   
    int i = 0;
    
    while(str_original[i] != '\0'){
        str_copia[i] = str_original[i];
        i ++;
    }
}

void maiusculas (char *str)
{   
    int i = 0;
    
    while (1){
        if (str[i] == ' '){
            printf(" ");
        }
        if (str[i] == '\n'){
            break;
        }
        if (str[i] <= 122 && str[i] >= 97){
            str[i] = str[i] - 32;
        }
        i++;
    }
}
char *concatena(char *str_a, char *str_b, char *str_c)
{   
    str_c[0] = str_a[0];
    str_c[1] = str_b[0];
    
    return str_c;
}

int capitalize (char *str)
{
    int i = 0;
    
    while(str[i] != '\0'){
        if(i == 0 && str[i + 1] <= 122 && str[i + 1] >= 97){
            str[i] = str[i] - 32;
        }
        
        if(str[i] == '\n'){
            str[i] = '\0';
        }
        
        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] <= 122 && str[i + 1] >= 97){
            str[i + 1] = str[i + 1] - 32;
        }
        
        i ++;
    }
    
    int tam = 0;
    while (str[tam] != '\0'){
        tam++;
    }
    
    return tam;
}

int compara (char *str1, char *str2)
{
    int tam1, tam2;
    tam1 = tam2 = 0;
    
    while(str1[tam1] != '\0'){
        tam1++;
    }
    
    while(str2[tam2] != '\0'){
        tam2++;
    }
    
    if (tam1 < tam2){
        return -1;
    }
    else if (tam1 == tam2){
        return 0;
    }
    else{
        return 1;
    }
}

