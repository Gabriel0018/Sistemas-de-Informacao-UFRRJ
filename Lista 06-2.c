#include <stdio.h>

typedef struct 
{
    int dia;
    int mes;
    int ano;
}calendario;

calendario inicializa(calendario *x)
{
    printf("Dia: ");
    scanf("%i", &x->dia);
    printf("Mes: ");
    scanf("%i", &x->mes);
    printf("Ano: ");
    scanf("%i", &x->ano);
}

int valida(calendario x)
{   
    int c = 0;
    if(x.ano < 1){
        c ++;
    }
    else if(x.dia > 31 || x.dia < 1){      
        c ++;
    }
    else if(x.mes > 12 || x.mes < 1){     
        c ++;
    }   
    else if(x.dia == 29 && x.mes == 2 && x.ano % 4 == 0){    
        c = 0;        
    }
    else if(x.dia >= 29 && x.mes == 2){   
        c ++;
    }  
    else if(x.dia > 30 && (x.mes == 4 || x.mes == 6 || x.mes == 9 || x.mes == 11) ){
        c ++;
    }
    else{
        c = 0;
    }
    return c;
}
calendario imprime(calendario x)
{
    printf("\nData: %.2d/%.2d/%d", x.dia, x.mes, x.ano);
}

int main(void)
{   
    calendario data;
    inicializa(&data);
    int c = valida(data);
    
    if (c == 1){
        printf("\nData invalida!");
    }
    else{
        imprime(data);
    }

    return 0;
}
