import math


def calc_percent(total, target):
    return round(target*100/total)


def calcula_porcentagem_sorteio(assinante, minutos_assistidos):
    resultado = []
    for i in range(len(assinante)):
        horas = math.ceil(minutos_assistidos[i]/60)
        if assinante[i]:
            horas *= 2
        resultado.append(horas)
    return [calc_percent(sum(resultado), horas) for horas in resultado]
