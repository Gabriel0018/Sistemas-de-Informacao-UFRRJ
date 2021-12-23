print('Escreva um nome para que seja contada a quantidade de letras e palavras: ')
nome = input()
letras = nome.replace(' ', '')
print('Quantidade de letras: ',len(letras.strip()))
print('Palavras: ', nome.split())

#Descritivo:
#1.pedir ao usuário para ele escrever uma basestring
#2.ler o input do usuário na variável nome
#3.mostrar ao usuário a quantidade de letras
#4.mostrar ao usuário as palavras da frase
#5.fim

#Estruturado:
#1.print('Escreva um nome para que seja contada a quantidade de letras e palavras: ')
#2.ler: nome
#3.atribuir: letras = nome.replace(' ', '')
#4.print('Quantidade de letras: ', len(letras.strip()))
#5.print('Palavras: ', nome.split())
#6.fim
