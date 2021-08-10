lista_numeros_primos = [2]
proximo_elemento = 2

while len(lista_numeros_primos) < 50:
    proximo_elemento += 1
    proximo_elemento_status=""

    for elemento in lista_numeros_primos:
        quociente = proximo_elemento / elemento
        quociente_inteiro = proximo_elemento // elemento

        if quociente_inteiro == quociente:
            proximo_elemento_status = "pula"
            break

    if proximo_elemento_status == "pula":
        continue
    else:
        lista_numeros_primos.append(proximo_elemento)

print(lista_numeros_primos)
