print('Digite dois números inteiros: ')
n1 = int(input('primeiro número: '))
n2 = int(input('segundo número: '))

if n1 > n2:
    print('O primeiro número é maior: ', n1,' > ',n2)

elif n1 == n2:
    print('Os números são iguais')
    
else:
    print('O segundo número é maior: ', n2, ' > ', n1)
