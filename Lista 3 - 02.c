#include <stdio.h>

int main()
{   
    float x;
    printf("Informe o valor de x: ");
    scanf("%f", &x);
    
    if (x > 0){
        float positivo(float x);
        printf("Resultado = %.2f", positivo(x));
    }
    
    else{
        float negativo(float x);
        printf("Resultado = %.2f", negativo(x));
    }
}

float positivo(float x)
{   
    int c = 1;
    float y = 0;
    for (c; c <= 100; c++){
        y = y + ((x + c) / c);
    }
    return y;
}

float negativo(float x)
{
    int c = 100;
    int s = 1;
    float y = 0;
    for(s; s <= 100; s++){
        if (s % 2 == 0){
            y = y - (((x * x) + s) / c);
        }
        else{
            y = y + (((x * x) + s) / c);
        }
        c = c - 1;
    }
    return y;
}

