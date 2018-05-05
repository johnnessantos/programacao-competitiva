salario = float(input())
if salario >= 0.0 and salario <= 2000.0 :
    print 'Isento'
elif salario > 2000.0 and salario <=3000.0:
    print 'R$',round((salario - 2000)*0.08,2)
elif salario>3000 and salario<=4500:
    print 'R$',round(80 + (salario-3000)*0.18,2)
else :
    print 'R$',round(350 + (salario-4500)*0.28,2)
