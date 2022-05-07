#Descritivo:
#1.inicio
#2.considerando  a tabela: codigo: 100 - misto quente - 4.5 codigo: 101 - refrigerante - 5.0 codigo: 102 - pão de queijo - 2.0 codigo: 103 - suco - 6.0
#3.mostrar para o usuário a tabela e receber o input do usuário para o código desejado
#4.se o input for um valor negativo sai do programa, e enquanto o valor for positivo mas que não seja algum dos códigos, a pergunta ao usuário se repete
#5.criar um looping infinito para que o usuário saia apenas quando digitar valor negativo
#6.mostrar para o usuário o valor total da compra, levando em consideração que o usuário pode escolher a quantidade e que o valor total da compra não pode ser negativo
#7.fim

#total, codigo, quantidade, soma, descrição, print, #
print('Código',' │','    Descrição','    │','Valor')
print(' 100','   │','  Misto quente','   │','4.50')
print(' 101','   │','  Refrigerante','   │','5.00')
print(' 102','   │','  Pão de queijo','  │','2.00')
print(' 103','   │','      Suco','       │','6.00')

total = []
codigo = int(input('Digite o código (valor negativo sai do programa): '))
while codigo >= 0:
    if codigo == 100:
        quantidade = int(input('Digite a quantidade: '))
        valor = 4.5 * quantidade
        total.append(float(valor))
        codigo = int(input('Digite o código: '))
        
    if codigo == 101:
        quantidade = int(input('Digite a quantidade: '))
        valor = 5 * quantidade
        total.append(float(valor))
        codigo = int(input('Digite o código: '))
    
    if codigo == 102:
        quantidade = int(input('Digite a quantidade: '))
        valor = 2 * quantidade
        total.append(float(valor))
        codigo = int(input('Digite o código: '))
        
    if codigo == 103:
        quantidade = int(input('Digite a quantidade: '))
        valor = 6 * quantidade
        total.append(float(valor))
        codigo = int(input('Digite o código: '))
    
    if codigo != 100 and codigo != 101 and codigo != 102 and codigo != 103 and codigo >= 0:
        codigo = int(input('Digite o código: '))

print('-=' * 30)       
soma = sum(total)

if soma < 0:
    print('Total da compra R$ 00,00')
else:
    print('Total da compra R$', soma)

#Estruturado:
#1.inicio
#2.mostrar: tabela formatada
#3.atribuir: codigo = 0
#4.atribuir: total = []
#5.input: codigo
#6.while codigo >= 0:
#6.1 if codigo == 100:
#6.1.1 input: quantidade
#6.1.2 atribuir: valor = 4.5 * quantidade
#6.1.3 função: total.append(float(valor))
#6.1.4 input: codigo
#6.1.5 fim if
#6.2 if codigo == 101:
#6.2.1 input: quantidade
#6.2.2 atribuir: valor = 5 * quantidade
#6.2.3 função: total.append(float(valor))
#6.2.4 input:codigo
#6.2.5 fim if
#6.3 if codigo == 102:
#6.3.1 input: quantidade
#6.3.2 atribuir: valor = 2 * quantidade
#6.3.3 função: total.append(float(valor))
#6.3.4 input: codigo
#6.3.5 fim if
#6.4 if codigo == 103:
#6.4.1 input: quantidade
#6.4.2 atribuir: valor = 6 * quantidade
#6.4.3 função: total.append(float(valor))
#6.4.4 input: codigo
#6.4.5 fim if
#6.5 if codigo != 100 and codigo != 101 and codigo != 102 and codigo != 103 and codigo >= 0:
#6.5.1 input: quantidade
#6.5.2 fim if
#7.mostrar: ('-=' * 30)
#8.atribuir: soma = sum(total)
#9. if soma < 0:
#9.1 mostrar: ('Total da compra R$ 00,00')
#10 else:
#10.1 mostrar: ('Total da compra R$', soma)
#11 fim if
#12 fim
    

