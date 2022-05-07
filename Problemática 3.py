import math
print('Informe a altura, em metros, do cômodo retangular da cozinha:')
h = float(input('altura: '))
print('Informe a largura em metros:')
l = float(input('largura: '))
print('Informe o comprimento em metros:')
c = float(input('comprimento: '))

paredefrontal = h * l * int(2)
paredelateral = h * c * int(2)
areatotal = paredefrontal + paredelateral
caixas = areatotal / float(1.5)

print('A quantidade de caixas de azulejo necessárias serão de: ', math.ceil(caixas))

#Estruturado:
#1.inicio

#2.mostrar:('Informe a altura, em metros, do cômodo retangular da cozinha:')
#3.ler: float h

#4.mostrar:('Informe a largura em metros:')
#5.ler: float l

#6.mostrar:('Informe o comprimento em metros:')
#7.ler: float c

#8.atribuir: paredefrontal = h * l * int(2)
#9.atribuir: paredelateral = h * c * int(2)
#10.atribuir: areatotal = paredefrontal + paredelateral
#11.atribuir: caixas = areatotal / float(1.5)

#12.mostrar:('A quantidade de caixas de azulejo necessárias serão de: ', math.ceil(caixas))

#13.fim


