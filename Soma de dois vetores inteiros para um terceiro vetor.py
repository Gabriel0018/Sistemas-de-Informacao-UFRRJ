#Estruturado:
#1.inicio
#2.criar variáveis para armazenar os valores do input do vetor 1 e do vetor 2
#3.criar uma variável para fazer o controle de quando o usuário desejar parar de inserir valores no vetore 1 e vetor 2
#4.criar um looping de repetição para que no vetor 3 seja somado os valores dos vetores 1 e 2, ou seja, a[0] do vetor 3 deve ser igual ao somatório do a[0] do vetor 1 com o a[0] do vetor 2 e assim sucessivamente
#5.caso os vetores sejam de tamanho diferente, informar ao usuário que não será possível realizar o somatório
#6.fim

vet1array = []
codificador1 = 0

while codificador1 != chr(110):
    vet1 = (input('Digite o valor do vetor 1: '))
    vet1array.append(int(vet1))
    codificador1 = (input('Deseja adicionar mais um elemento ao vetor? (s/n): '))
    if codificador1 is chr(110):
        break

print('-=' * 30)
    
vet2array = []
codificador2 = 0

while codificador2 != chr(110):
    vet2 = (input('Digite o valor do vetor 2: '))
    vet2array.append(int(vet2))
    codificador2 = (input('Deseja adicionar mais um elemento ao vetor? (s/n): '))
    if codificador2 is chr(110):
        break

print('-=' * 30)
print(' Vetor 1:',vet1array, '\n','Vetor 2:', vet2array)
    

vet3 = []

if len(vet1array) == len(vet2array):
    for i in range(0,len(vet1array)):
        soma = vet1array[0+i] + vet2array[0+i]
        vet3.append(int(soma))

else:
    print('Os vetores possuem tamanho diferente! Falha no somatório de vetores')

if len(vet1array) == len(vet2array):
    print(' Vetor 3:',vet3)

#Estruturado:
#1.atribuir: vet1array = []
#2.atribuir: codificador1 = 0
#3.while codificador1 != chr(110):
#3.1 input: vet1
#3.2 função: vet1array.append(int(vet1))
#3.3 input: codificador1
#3.4 if codificador1 is chr(110):
#3.4.1 break
#3.5 fim se
#4.mostrar: -= * 30
#5.atribuir: vet2array = []
#6.atribuir: codificador2 = 0
#7.while codificador2 != chr(110):
#7.1 input: vet2
#7.2 função: vet2array.append(int(vet2))
#7.3 input:codificador2
#7.4 if codificador2 is chr(110):
#7.4.1 break
#7.5 fim se
#8.mostrar: -= * 30
#9.mostrar:(' Vetor 1:',vet1array, '\n','Vetor 2:', vet2array)
#10.atribuir: vet3 = []
#11.if len(vet1array) == len(vet2array):
#11.1 for i in range(0,len(vet1array)):
#11.1.1 atribuir: soma = vet1array[0+i] + vet2array[0+i]
#11.1.2 função: vet3.append(int(soma))
#12.else:
#12.1 mostrar: ('Os vetores possuem tamanho diferente! Falha no somatório de vetores')
#13.if len(vet1array) == len(vet2array):
#13.1 mostrar: vet3
#14.fim if
#15.fim

    




