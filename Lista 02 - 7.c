#include <stdio.h>

int main()
{
    int principal, bebida, sobremesa, leitor, caloria;
    
    printf("Cárdapio do dia! Selecione de acordo com seu interesse: \n\n");
    printf("    Prato principal\n(1)Vegetariano - 180cals\n(2)Peixe       - 230cals\n(3)Frango      - 250cals\n(4)Carne       - 350cals\n");
    printf("Opção: ");
    scanf("%d", &leitor);
    
    while (leitor != 1 && leitor != 2 && leitor != 3 && leitor != 4){
        printf("\n    Prato principal\n(1)Vegetariano - 180cals\n(2)Peixe       - 230cals\n(3)Frango      - 250cals\n(4)Carne       - 350cals\n");
        printf("Opção: ");
        scanf("%d", &leitor);
    }
    
    if (leitor == 1){
        caloria = 180;
    }
    else if (leitor == 2){
        caloria = 230;
    }
    else if (leitor == 3){
        caloria = 250;
    }
    else{
        caloria = 350;
    }
    
    printf("            Bebida\n");
    printf("(1)Chá lata          -  80cals\n(2)Suco de laranja   - 150cals\n(3)Suco de melão     -  70cals\n(4)Refrigerante diet -   2cals\n");
    printf("Opção: ");
    scanf("%d", &leitor);
    
    while (leitor != 1 && leitor != 2 && leitor != 3 && leitor != 4){
        printf("            Bebida\n");
        printf("(1)Chá lata          -  80cals\n(2)Suco de laranja   - 150cals\n(3)Suco de melão     -  70cals\n(4)Refrigerante diet -   2cals\n");
        printf("Opção: ");
        scanf("%d", &leitor);
    }
    
    if (leitor == 1){
        caloria = caloria + 80;
    }
    else if (leitor == 2){
        caloria = caloria + 150;
    }
    else if (leitor == 3){
        caloria = caloria + 70;
    }
    else{
        caloria = caloria + 2;
    }
    printf("            Sobremesa\n");
    printf("(1)Abacaxi             -  75cals\n");
    printf("(2)Sorvete diet        - 110cals\n");
    printf("(3)Mousse diet         -  60cals\n");
    printf("(4)Mousse de chocolate - 250cals\n");
    printf("Opção: ");
    scanf("%d", &leitor);
    
    while (leitor != 1 && leitor != 2 && leitor != 3 && leitor != 4){
        printf("            Sobremesa\n");
        printf("(1)Abacaxi             -  75cals\n");
        printf("(2)Sorvete diet        - 110cals\n");
        printf("(3)Mousse diet         -  60cals\n");
        printf("(4)Mousse de chocolate - 250cals\n");
        printf("Opção: ");
        scanf("%d", &leitor);
    }
    
    if (leitor == 1){
        caloria = caloria + 75;
    }
    else if (leitor == 2){
        caloria = caloria + 110;
    }
    else if (leitor == 3){
        caloria = caloria + 60;
    }
    else{
        caloria = caloria + 250;
    }
    printf("\nQuantidade total de calorias ingeridas nas refeições = %dcals", caloria);
    return 0;
}

