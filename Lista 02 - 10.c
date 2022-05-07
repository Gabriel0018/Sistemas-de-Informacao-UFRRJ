#include <stdio.h>

int main()
{
    float minimo, saldo, valor, taxa, porcentagem;
    int transacoes, contador, conta;
    char leitor;
    
    contador = 1;
    printf("O programa simula um sistema bancário de balanço mínimo!\n\n");
    printf("Informe o valor do balanço mínimo diário: R$");
    scanf("%f", &minimo);
    printf("Quantidade de transações: ");
    scanf("%d", &transacoes);
    printf("Informe o valor da taxa a ser paga, em porcentagem, caso seja aplicada a multa do balanço mínimo (%%): ");
    scanf("%f", &porcentagem);
    
    for (transacoes; transacoes >= 1; transacoes--)
    {
        printf("\n%dᵃ transação!\n", contador);
        printf("Informe o número da conta bancária: ");
        scanf("%d", &conta);
        printf("Informe o saldo inicial que está na conta: R$");
        scanf("%f", &saldo);
        printf("Digite a letra correspondente para informar o tipo de transação\n[d]depósito\n[r]retirada\nOpção: ");
        scanf("%s", &leitor);
        
        while (leitor != 'd' && leitor != 'D' && leitor != 'r' && leitor != 'R')
        {
            printf("\n\nDigite adequadamente a letra correspondente para informar o tipo de transação!\n[d]depósito\n[r]retirada\nOpção: ");
            scanf("%s", &leitor);
        }
        
        printf("Informe o valor da transação: R$");
        scanf("%f", &valor);
        
        if (leitor == 'd' | leitor == 'D')
        {
            saldo = saldo + valor;
        }
        else if (leitor == 'r' | leitor == 'R')
        {
            saldo = saldo - valor;
        }
        
        if (saldo < minimo && saldo > 0)
        {   
            taxa = (saldo * (porcentagem / 100));
            printf("\n\nO saldo da conta bancária está abaixo do balanço mínimo, sera descontado %.2f%% = %.2f\n", porcentagem, taxa);
            printf("Conta bancária => %d => R$%.2f", conta, saldo - taxa);
        }
        else if (saldo < 0)
        {
            printf("\nConta => %d => Não há fundos!", conta);
        }
        else
        {
            printf("\n\nA conta bancária informada não pagará taxa, valor acima ou igual do balanço mínimo\n");
            printf("Conta bancária => %d => R$%.2f", conta, saldo);
        }
        contador += 1;
        printf("\n\n");
    }
    return(0);
}


