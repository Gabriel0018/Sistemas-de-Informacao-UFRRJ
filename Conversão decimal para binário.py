binario = (input('Digite o binário para ser transformado em decimal: '))

if '2' in binario or '3' in binario or '4' in binario or '5' in binario or '6' in binario or '7' in binario or '8' in binario or '9' in binario:
    print('Digite um número binário!')

else:
    tamanho = []

    for i in binario:
        tamanho.append(int(i))

    elevado = len(tamanho) - 1
    decimal = 0
    
    for i in tamanho:
        i = i * (2 ** elevado)
        print(i,'+ ', end ='')
        decimal = decimal + i
        elevado = elevado - 1
    
    print('0',' = ', decimal)

#Estruturado:
#1.inicio
#2.atribuir: binario = (input('Digite o binário para ser transformado em decimal: '))
#3.if '2' in binario or '3' in binario or '4' in binario or '5' in binario or '6' in binario or '7' in binario or '8' in binario or '9' in binario:
#3.1 mostrar: Digite um número binário!
#4.else:
#4.1 atribuir: tamanho = []
#4.2 for i in binario:
#4.2.1 tamanho.append(int(i))
#4.3 atribuir: elevado = len(tamanho) - 1
#4.4 atribuir: decimal = 0
#4.5 for i in tamanho:
#4.5.1 atribuir: i = i * (2 ** elevado)
#4.5.2 atribuir: decimal = decimal + i
#4.5.3 atribuir: elevado = elevado - 1
#4.6 mostrar: O valor decimal é:, decimal
#5.fim

#Descritivo:
#1.inicio
#2.criar uma variável para armazenar a informação do valor em binário e fechar o programa se o valor digitado for diferente de 0 ou 1
#3.caso o valor não seja igual a 2,3,4,5,6,7,8 ou 9, criar um array vazio que irá receber cada 0 ou 1 do input e formar um array com esses valores
#4.criar uma variável para ser a potência que irá multiplicar para dar o valor de decimal
#5.criar um looping for que irá gerar o processo automático do cálculo de binário para decimal
#6.mostrar o valor de decimal para o usuário
#7.fim
