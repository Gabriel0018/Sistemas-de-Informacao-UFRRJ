print ('Digite um número inteiro: ')
N = int(input('Valor de N: '))

contador = 1
while True:
    print(contador)
    contador = contador + 1
    if contador > N:
        break
    
if N <= contador:
    while True:
        print(N)
        N = N + 1
        if N >= contador:
            break
    
    
    
