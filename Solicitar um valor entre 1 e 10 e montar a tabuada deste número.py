n = int(input('Digite o número que deseje efetuar a tabuada entre 1 e 10: '))

while n > 10 or n < 1:
    n = int(input('A calculadora de tabuada só aceita valores inteiros entre 1 e 10. Tente outro número: '))

c = 0
for contador in range(0,n*11,n):
    print(n,'x',c, '=', contador)
    c = c + 1