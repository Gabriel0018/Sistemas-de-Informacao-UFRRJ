import numpy as np

frequencia = np.empty(101)

for x in range(0,101):
  frequencia[x] = 0.0

valor =0
total = 0

while (valor>=0):
  valor = int(input('Digite um valor para calcular a frequência entre 1 e 100, negativo sai do programa: '))
  
  if ( valor >= 0 and valor <= 100):

    frequencia[valor] = frequencia[valor] + 1
    total = total + 1

for numero in range(1,101):
  if ( frequencia[numero] > 0 ):
    print(  'Valor       Frequência     Porcentagem\n',
                 numero, '          ',                                              frequencia[numero], '           ', frequencia[numero]* 100 / total, '%\n')
