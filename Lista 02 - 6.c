#include <stdio.h>

int main()
{
    printf("Resolvendo o enunciado:\n\nDado um país A, com 5.000.000 de habitantes e taxa de natalidade de 3%% ao ano,\n");
    printf("e um país B, com 7.000.000 de habitantes e taxa de natalidade de 2%% ao ano,\n");
    printf("calcule e imprima o tempo necessário para que a população do país A ultrapasse a população do país B.");
    
    float a, b, tempo;
    a = 5000000;
    b = 7000000;
    tempo = 0;
    
    while (a < b)
    {
        a = a + ( a * 0.03);
        b = b + ( b * 0.02);
        tempo = tempo + 1;
    }
    printf("\n\nResposta: %.0f anos", tempo);
    return 0;
}
