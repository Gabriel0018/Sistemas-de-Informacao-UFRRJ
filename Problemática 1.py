print('Digite o odômetro inicial (antes da corrida do dia) em km')
odinicial = float(input('odômetro inicial: '))
print('Digite o odômetro final (depois da corrida do dia) em km')
odfinal = float(input('odômetro final: '))
print('Digite a quantidade gasta de gasolina em litros: ')
g = float(input('gasolina em liros: '))
print('Digite o valor recebido por todas as corridas realizadas: ')
c = float(input('valor recebido pelas corridas: '))

d = odfinal - odinicial
gasto = g * 2.75
media = d / g
lucro = c - gasto

print ('Distância percorrida:', d, 'km')
print ('Gasto com gasolina: R$', gasto)
print ('Média do consumo:', media, 'km/L')
print ('O lucro final do dia: R$', lucro)

#Estruturado:
#1.inicio

#2.escreva:('Digite o odômetro inicial (antes da corrida do dia) em km')
#3.leia: input float odinicial

#4.escreva:('Digite o odômetro final (depois da corrida do dia) em km')
#5.leia: input float odfinal

#6.escreva:('Digite a quantidade gasta de gasolina em litros: ')
#7.leia: input float g 

#8.escreva:('Digite o valor recebido por todas as corridas realizadas: ')
#9.leia: input float c

#10.atribuir: d = odfinal - odinicial
#11.atribuir: gasto = g * 2.75
#12.atribuir: media = d / g
#13.atribuir: lucro = c - gasto

#14.escreva:('Distância percorrida:', d, 'km')
#15.escreva:('Gasto com gasolina:', gasto, 'L')
#16.escreva:('Média do consumo:', media, 'km/L')
#17.escreva:('O lucro final do dia: R$', lucro)

#18.fim

