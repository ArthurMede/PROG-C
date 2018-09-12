def ler():
    n1=int(input('Digite um número: '))
    n2=int(input('Digite outro número: '))
    maior=0
    menor=0
    if n1>n2:
        maior=n1
        menor=n2
    elif n2>n1:
        maior=n2
        menor=n1
    else:
        print('Os números são iguais.')
    for c in range(menor+1, maior):
        print(c)
ler()
