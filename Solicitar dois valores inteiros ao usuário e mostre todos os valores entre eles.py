print('Digite dois números inteiros')
n1 = int(input('n1: '))
n2 = int(input('n2: '))

if n1 > n2:
    for contador in range(n2,n1+1,1):
        print(contador)

else:
    for contador in range(n1,n2+1,1):
        print(contador)
    
