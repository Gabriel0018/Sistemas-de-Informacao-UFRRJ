print('Escreva a quantidade de maças compradas: ')
unidade = int(input('Unidade de maças: '))

if  unidade >= int(12):
    
    valor = float (0.36)
    custo = valor * unidade
    print('O total gasto com as maças foram de R$',custo)

else:
    valor = float (0.45)
    custo = valor * unidade
    print('O total gasto com as maças foram de R$',custo)
    
#Estruturado:
#1.inicio
#2.escreva:('Escreva a quantidade de maças compradas: ')
#3.leia: input int unidade

#4.if: unidade >= int(12):
#4.1 atribuir: valor = float (0.36)
#4.2 atribuir: custo = valor * unidade
#4.3 escreva: ('O total gasto com as maças foram de R$',custo)

#5.else:
#5.1 atribuir: valor = float (0.45)
#5.2 atribuir: custo = valor * unidade
#5.3 escreva: ('O total gasto com as maças foram de R$',custo)

#6.fim se
#7.fim
    
