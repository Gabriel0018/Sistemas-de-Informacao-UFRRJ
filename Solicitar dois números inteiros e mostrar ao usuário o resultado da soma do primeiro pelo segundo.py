print('Digite dois valores: ')
n1 = int(input('primeiro número: '))
n2 = int(input('segundo número: '))

soma = n1 + n2
subtracao = n1 - n2
multiplicacao = n1 * n2

if n2 == 0:
    print('soma = ', soma)
    print('subtracao = ', subtracao)
    print('multiplicacao = ', multiplicacao)
    print('Não é possível efetuar a divisão por 0')

else:
    divisao = n1 / n2
    print('soma = ', soma)
    print('subtracao = ', subtracao)
    print('multiplicacao = ', multiplicacao)
    print('divisao = ', divisao)
