def checa_numero_escondido(numero, numero_oculto):
    numero = str(numero)
    numero_oculto = str(numero_oculto)

    actual = 0
    for char in numero:
        if char == numero_oculto[actual]:
            actual += 1
        if actual == len(numero_oculto):
            return True
    return False
