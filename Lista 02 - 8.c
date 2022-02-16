#include <stdio.h>

int main()
{   
    int n, c;
    printf("O programa calcula a tabuada (do 1 ao 10) de qualquer valor não negativo!\n\n");
    printf("Digite um valor inteiro positivo ou zero: ");
    scanf("%d", &n);
    
    while (n < 0){
        printf("Digite um valor inteiro positivo ou zero: \n");
        scanf("%d", &n);
    }
    c = 1;
    
    printf("\nTabuada do %d\n", n);
    
    for (c; c <= 10; c++){
        
        if (c == 10){
            printf("%d x %d = %d", n, c, n * c);
            break;
        }
        
        printf("%d x %d  = %d\n", n, c, n * c);
    }
    return 0;
}

