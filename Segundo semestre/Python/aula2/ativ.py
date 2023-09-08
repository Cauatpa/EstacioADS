"""Atividade 1
Faça um programa para montar atabela de multiplicação de números de 1 a 10
"""

for i in range(1, 11):
    for j in range(1, 11):
        resultado = i * j
        print(f'{i} x {j} = {resultado}')

"""Atividade 2
 Faça um programa para determinar o número de dígitos de um número inteiro positivo informado
"""

num = int(input("Digite um número inteiro positivo: "))

while num <= 0:
    print("O número deve ser positivo.")
    num = int(input("Digite um número inteiro positivo: "))

numstr = str(num)
numdig = len(numstr)

print(f'O número de dígitos em {num} é: {numdig}')


"""Atividade 3
Faça um programa para calcular a série de Fibonacci para um número informado pelo usuário, sendo F(0)=0,F(1)=1eF(n)=F(n-1)+F(n-2)
"""

def fibonacci(n):
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

n = int(input("Digite um número para calcular o termo correspondente na série de Fibonacci: "))

if n < 0:
    print("O número deve ser maior ou igual a zero.")
else:
    resultado = fibonacci(n)
    print(f'O termo de Fibonacci F({n}) é igual a {resultado}.')

"""Atividade 4
Faça um programa para listar todos os divisores de um número ou dizer que o número é primo caso não existam divisores Ao final, verifique se o usuário deseja analisar outro número
"""

def listdiv(numero):
    div = []
    for i in range(1, numero + 1):
        if numero % i == 0:
            div.append(i)
    return div

def primo(numero):
    if numero <= 1:
        return False
    for i in range(2, int(numero ** 0.5) + 1):
        if numero % i == 0:
            return False
    return True

while True:
    try:
        num = int(input("Digite um número inteiro positivo: "))
        if num < 0:
            print("Insira um número inteiro positivo.")
            continue

        div = listdiv(num)
        if len(div) == 2:
            print(f"{num} é um número primo.")
        else:
            print(f"{num} não é um número primo. Divisores: {div}")

        continuar = input("Deseja ver outro número? (S/N): ").strip().lower()
        if continuar != "s":
            break
    except ValueError:
        print("Insira um número inteiro válido.")

"""Atividade 5
Faça um programa que calcule o retorno de um investimento financeiro fazendo as contas mês a mês, sem usar a fórmula de juros com postos 
O usuário deve informar quanto será investido por mês e qual será a taxa de juros mensal 
O programa deve informar o saldo do investimento após um ano, e perguntar ao usuário se ele deseja que seja calculado o ano seguinte, sucessivamente. 
Porexemplo, caso o usuário deseje investir R$100,00 por mês, e tenha uma taxa de juros de 1% ao mês, o programa forneceria aseguinte saída : Saldo do investimento após 1 ano : R$1268.25
"""

def calcula_retorno_investimento(investimento_mensal, taxa_juros_mensal, meses):
    saldo = 0
    for _ in range(meses):
        saldo += investimento_mensal
        saldo *= (1 + taxa_juros_mensal)
    return saldo

while True:
    investimento_mensal = float(input("Informe o valor a ser investido por mês: "))
    taxa_juros_mensal = float(input("Informe a taxa de juros mensal (em decimal): "))
    meses = 12  # Um ano

    saldo_final = calcula_retorno_investimento(investimento_mensal, taxa_juros_mensal, meses)

    print(f"Saldo do investimento após 1 ano: R${saldo_final:.2f}")

    continuar = input("Deseja calcular o ano seguinte? (S/N): ")
    if continuar.lower() != 's':
        break
