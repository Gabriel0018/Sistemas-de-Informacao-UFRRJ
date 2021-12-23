maior = menor = numero = 0

while numero >= 0:
    numero = int(input('Digite um valor inteiro (valor negativo sai do programa): '))

    if numero > maior:
        maior = numero
    
    if numero < menor:
        menor = numero
        
print('O número maior digitado foi: ',maior)
print('O número menor digitado foi: ',menor)

#Descritivo:
#1.Crie as variáveis maior, menor e numero e atribua 0
#2.enquanto a variável numero for maior ou igual a 0, diga para o usuário digitar outro valor
#3.crie condições if para atribuir o número maior na variável maior e o número menor na variável menor
#4.mostre para o usuário o menor e o maior valor digitado
#5.fim se
#6.fim while
#7.fim

#Estruturado:
#1.atribuir: maior = menor = 0
#2.while numero >= 0:
#2.1 input('Digite um valor inteiro(valor negativo sai do programa')): numero
#2.2 if numero > maior:
#2.2.1 atribuir: maior = numero
#2.3 if numero < menor:
#2.3.1 atribuir: menor = numero
#3.fim se
#4.fim while
#5.mostrar:('O maior valor digitado foi de: ', maior)
#6.mostrar:('O menor valor digitado foi de: ', menor)
#7.fim

    



