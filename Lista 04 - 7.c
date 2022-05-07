#include <stdio.h>
#include <conio.h>

//------------Funcoes auxiliares-------------------------
void ler_e_mostrar(char texto[1001]);
int tamanho_string(char texto[1001]);
void texto_modificado(char texto[1001]);
//-------------------------------------------------------

//--------------------------------------Funcao main---------------------------------------------
int main()
{   
    printf("O programa mostra um texto modificado baseado na repeticao de vogais!\n(O programa suporta textos com ate 1000 caracteres, contando o espaco)\n\n");
    char texto[1001];
    
    ler_e_mostrar(texto);
    tamanho_string(texto);
    printf("\nTexto modificado: \n");
    texto_modificado(texto);
    
    return 0;
}
//------------------------------Codigo das funcoes auxiliares-----------------------------------
void ler_e_mostrar(char texto[1001])
{
    printf("Escreva o texto: ");
    fgets(texto, 1000, stdin);
    printf("\nTexto lido: \n%s", texto);
}

int tamanho_string(char texto[1001])
{   
    int c = 0, tamanho = -1;
    while(texto[c] != '\0'){
        c ++;
        tamanho ++;
    }
    return tamanho;
}
void texto_modificado(char texto[1001])
{   
    int tamanho = tamanho_string(texto);
    int n = 1, aux = 1, c = 0;
    while (c <= tamanho)
    {
        if (texto[c] == 'a'){
            while (aux >= 1){
                printf("a");
                aux = aux - 1;
            }
            n = n + 1;
            c = c + 1;
            aux = n;
        }
        
        else if (texto[c] == 'e'){
            while (aux >= 1){
                printf("e");
                aux = aux - 1;
            }
            n = n + 1;
            c = c + 1;
            aux = n;
        }
        
        else if (texto[c] == 'i'){
            while (aux >= 1){
                printf("i");
                aux = aux - 1;
            }
            n = n + 1;
            c = c + 1;
            aux = n;
        }
        
        else if (texto[c] == 'o'){
            while (aux >= 1){
                printf("o");
                aux = aux - 1;
            }
            n = n + 1;
            c = c + 1;
            aux = n;
        }
        
        else if (texto[c] == 'u'){
            while (aux >= 1){
                printf("u");
                aux = aux - 1;
            }
            n = n + 1;
            c = c + 1;
            aux = n;
        }
        else{
            printf("%c", texto[c]);
            c = c + 1;
        }
    }
}

