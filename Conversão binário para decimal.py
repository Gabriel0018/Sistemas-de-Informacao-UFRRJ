decimal = int(input('Digite um valor decimal para que seja convertido em binário: '))
sobra = []
while decimal > 0:
    divisao = decimal % 2
    sobra.append(divisao)
    decimal = decimal // 2

binario = ''
for i in sobra[::-1]:
    binario = binario + str(i)

print('Conversão para binário = ', binario)


#Estruturado:
#1.inicio
#2.input: decimal
#3.atribuir: sobra = []
#4.while decimal > 0:
#4.1 atribuir: divisao = decimal % 2
#4.2 função: sobra.append(divisao)
#4.3 atribuir: decimal = decimal // 2
#5.atribuir: binario = ''
#6.for i in sobra[::-1]:
#6.1 atribuir: binario = binario + str(i)
#7.mostrar: ('Conversão para binário = ', binario)
#8.fim

#Descritivo:
#1.inicio
#2.crie uma variável que irá receber o input do usuário
#3.criar um array vazio para armazenar o valor do resto da divisão
#4.criar uma condição de lopping para que enquanto o valor decimal fornecido seja maior que 0, continue a divisão por 2
#5.criar uma função que irá agregar os valores recebidos da divisão no array vazio
#6.criar um looping for que irá se repetir para todos os valores armazenados no array vazio inicial
#7.por fim, deve atribuir que binario é igual a binario + a soma da string usada de referencia em for, e mostrar ao usuário valor de binário
#8.fim


