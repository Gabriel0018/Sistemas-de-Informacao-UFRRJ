#Estruturado:
#1.inicio
#2.input: salario
#3.if salario < 0:
#3.1 mostrar:('Não é possível aplicar reajuste em salário negativo')
#3.2 fim if
#4.elif salario <= 2000:
#4.1 atribuir: reajuste = salario * 0.5
#4.2 mostrar:('O reajuste foi = R$', reajuste)
#4.3 atribuir: total = salario + reajuste
#4.4 mostrar:('O total do salário após somar o reajuste do funcionário = R$',total)
#4.5 fim if
#5.elif salario <= 5000:
#5.1 atribuir: reajuste = salario * 0.4
#5.2 mostrar:('O reajuste foi = R$', reajuste)
#5.3 atribuir: total = salario + reajuste
#5.4 mostrar:('O total do salário após somar o reajuste do funcionário = R$',total)
#5.5 fim if
#6.elif salario <= 7000:
#6.1 atribuir: reajuste = salario * 0.2
#6.2 mostrar:('O reajuste foi = R$', reajuste)
#6.3 atribuir: salario + reajuste
#6.4 mostrar: ('O total do salário após somar o reajuste do funcionário = R$',total)
#6.5 fim if
#7.elif salario > 7000:
#7.1 atribuir: reajuste = salario * 0.1
#7.2 mostrar: ('O reajuste foi = R$', reajuste)
#7.3 atribuir: total = salario + reajuste
#7.4 mostrar: ('O total do salário após somar o reajuste do funcionário = R$',total)
#7.5 fim if
#8.fim

salario = float(input('Digite o salário recebido: '))

if salario < 0:
    print('Não é possível aplicar reajuste em salário negativo')


elif salario <= 2000:
    reajuste = salario * 0.5
    print('O reajuste foi = R$', reajuste)
    total = salario + reajuste
    print('O total do salário após somar o reajuste do funcionário = R$',total)
    
elif salario <= 5000:
    reajuste = salario * 0.4
    print('O reajuste foi = R$', reajuste)
    total = salario + reajuste
    print('O total do salário após somar o reajuste do funcionário = R$',total)
    
elif salario <= 7000:
    reajuste = salario * 0.2
    print('O reajuste foi = R$', reajuste)
    total = salario + reajuste
    print('O total do salário após somar o reajuste do funcionário = R$',total)
    
elif salario > 7000: 
    reajuste = salario * 0.1
    print('O reajuste foi = R$', reajuste)
    total = salario + reajuste
    print('O total do salário após somar o reajuste do funcionário = R$',total)
    
#Descritivo:
#1.inicio
#2.criar condições que de acordo com o salário (input) do usuário, irá atender a uma das faixas do salário
#3.criar uma condição que irá fechar o programa quando o input informado for um valor negativo
#4.mostrar ao usuário o reajuste feito no salário e o total que ele irá receber depois de sofrer o reajuste
#5.fim
