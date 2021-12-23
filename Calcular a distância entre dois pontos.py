import math
print ('Dê as coordenadas dos pontos X(xa,ya) e Y (xb,yb) para que seja calculada a distância entre eles')
xa = float(input('coordenadas xa: '))
ya = float(input('coordenadas ya: '))
xb = float(input('coordenadas xb: '))
yb = float(input('coordenadas yb: '))
distancia = math.sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya))
print ('A distância entre os pontos X e Y é: ', distancia)

#Estruturado:
#1.início
#2.escreva:('Dê as coordenadas dos pontos X(xa,ya) e Y(xb,yb) para que seja calcuada a distância entre eles')
#3.leia: input float xa
#4.leia: input float ya
#5.leia: input float xb
#6.leia: input float yb
#7.atribua: distancia = math.sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya))
#8.escreva:('A distância entre os pontos X e Y é: ', distancia)
#9.fim


