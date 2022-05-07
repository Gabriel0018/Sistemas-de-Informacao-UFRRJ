import random
n1 = random.randint(-100,100)
n2 = random.randint(-100,100)

if n1 > n2:
    for contador in range(n2,n1+1,1):
        print(contador)

else:
    for contador in range(n1,n2+1,1):
        print(contador)