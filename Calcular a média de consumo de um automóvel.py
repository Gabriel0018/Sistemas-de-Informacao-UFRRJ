print('Digite a quantidade, em km, percorrido e a quantidade de combustível, em litros, gasta: ')
litros = float(input('quantidade gasta em litros: '))
distancia = float(input('distância percorrida: '))


while distancia >= 0:
    media = distancia / litros
    print('A média do consumo é de: ', media, 'km/L')
    
    litros = float(input('quantidade gasta de combustível em litros: '))
    distancia = float(input('distância percorrida em km: '))

#Descritivo:
#1.inicio
#2.perguntar ao usuário a quantidade de km percorrido e a quantidade de combustível em litros gasto
#3.ler e armazenar as informações fornecidas pelo usuário nas variáveis distancia e litros, respectivamente
#4.criar condição while para que quando a distancia for maior que 0 o programa sempre retorne a pergunta inicial para calcular o consumo médio (distancia / litros)
#5.fim while
#6.fim

#Estruturado:
#1.inicio
#2.print:('Digite a quantidade, em km, percorrido e a quantidade de combustível, em litros, gasta:')
#3.ler: distancia = input float
#4.ler: litros = input float
#5.while distancia >=0:
#5.1 atribuir: media = distancia / litros
#5.2 print:('A média do consumo é de: ', media, 'km/L')
#5.3 ler: distancia = input float
#5.4 ler: litros = input float