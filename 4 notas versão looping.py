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

codificador = 0

while codificador != chr(78) or codificador != chr(110):
    codificador = input('Gostaria de calcular outra média? S/N: ')
    
    if codificador == chr(78) or codificador == chr(110):
        break
    
    if codificador == chr(83) or codificador == chr(115):
        break
    
while codificador == chr(83) or codificador == chr(115):   
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
    
    codificador = input('Gostaria de calcular outra média? S/N: ')
    
    if codificador == chr(78) or codificador == chr(110):
        break
    
    
        
    

