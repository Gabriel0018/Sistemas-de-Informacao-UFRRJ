nome = str(input('Escreva seu nome: '))
n1 = float(input('Digite a sua nota 1: '))
n2 = float(input('Digite a sua nota 2: '))
n3 = float(input('Digite a sua nota 3: '))
n4 = float(input('Digite a sua nota 4: '))

media = (n1 + n2 + n3 + n4) / 4

if media >= 6:
    print('Sua média final foi de: ', media)
    print('Parabéns, você foi aprovado!')
    
else:
    print('Sua média final foi de: ', media)
    print('Sinto muito, mas você foi reprovado')
    