print('Digite "F/f" para consultar o peso ideal para mulheres ou "M/m" para homens:' )
codificador = input('Digite o código: ')

if codificador is chr(70) or codificador is chr(102):
    print('Digite sua altura')
    h = float(input('altura: '))
    pesomulher = ((62.1 * h) - 44.7)
    print('O peso ideal é:', pesomulher,'kg')

elif codificador is chr(77) or codificador is chr(109):
    print('Digite sua altura')
    h = float(input('altura: '))
    pesohomem = ((72.7 * h) - 58.0)
    print('O peso ideal é:', pesohomem, 'kg')

else:
    print('Valor inválido!')

#Estruturado:
#1.inicio
#2.mostrar:('Digite F/f para consultar o peso ideal para mulheres ou M/m para homens:')
#3.leia: codificador
#4.se codificador is chr(70) or codificador is chr(102):
#4.1 mostrar:('Digite sua altura: ')
#4.2 leia: h
#4.3 atribuir: pesomulher = ((62.1 * h) - 44.7)
#4.4 mostrar:('O peso ideal é:', pesomulher, 'kg')

#5.se não se codificador is chr(77) or codificador is chr(109):
#5.1 mostrar:('Digite a sua altura: ')
#5.2 leia: h
#5.3 atribuir: pesohomem = ((72.7 * h) - 58.0)
#5.4 mostrar:('O peso ideal é:', pesohomem, 'kg')

#6.se não
#6.1 mostrar:('Valor inválido!')
#7. fim se
#8. fim
    
    