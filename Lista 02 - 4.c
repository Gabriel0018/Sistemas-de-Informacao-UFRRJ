
#include <stdio.h>

int main()
{   
    int numerador, denominador, xnum, contador; //xnum corresponde ao resto, contador para quociente
    contador = 0;
    
    printf("O programa calcula o quociente e o resto de uma divisão inteira utilizando princípios da subtração sucessiva!\n");
    printf("Informe o numerador: ");
    scanf("%d", &numerador);
    printf("Informe o denominador: ");
    scanf("%d", &denominador);
    
    xnum = numerador;
    
    while (1)
    {   
        if (xnum < denominador)
        {
            break;
        }
        xnum = xnum - denominador;
        contador = contador + 1;
    }
    printf("\nEm uma divisão de %d/%d:\n", numerador, denominador);
    printf("Quociente = %d\n", contador);
    printf("Resto = %d", xnum);
    
    

    return 0;
}


