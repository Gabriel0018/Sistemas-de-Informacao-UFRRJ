print('Digite um número inteiro: ')
N = int(input('N: '))

contador = 1

if contador > N:
    while contador > N:
        print(N)
        N = N + 1

while contador <= N:
    print(contador)
    contador = contador + 1

