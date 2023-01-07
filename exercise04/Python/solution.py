def getMaior(elementos):
    maior = 0
    for i in range(len(elementos)):
        if elementos[i][1] > elementos[maior][1]:
            maior = i
            continue
        elif elementos[i][1] == elementos[maior][1]:
            if elementos[i][2] < elementos[maior][2]:
                maior = i
    return maior


def calcula_top_ocorrencias_de_queries(texto, queries, k):
    elementos = [[termo, texto.count(termo), texto.find(termo)]
                 for termo in queries]
    resultado = []
    while len(resultado) < k:
        maior = getMaior(elementos)
        resultado.append(elementos[maior])
        elementos.pop(maior)
    return [resultado[0] for resultado in resultado]
