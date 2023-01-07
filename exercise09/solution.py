# tentativa de resolver o problema.
# def menor_string_maior(name):
#    for i in range(len(name)-1, -1, -1):
#        print(i)
#        melhor = 0
#        diff = ord(name[i]) - ord(name[melhor])
#        for j in range(len(name)-1, -1, -1):
#            print(diff)
#            result = ord(name[i]) - ord(name[j])
#            if result > 0 and result < diff:
#                melhor = j
#                diff = result
#
#        result = ""
#        for k in range(len(name)):
#            if k == melhor:
#                result+=name[i]
#            elif k == i:
#                result+=name[melhor]
#            else:
#                result += name[k]
#
#        if result > name:
#            return result
#

# apelei para o método de permutação
from itertools import permutations


def arranjos(palavra):
    resultado = set()
    resultado.update("".join(r) for r in permutations(palavra, len(palavra)))
    return resultado


def menor_string_maior(name):

    options = list(arranjos(name))
    best = None
    for option in options:
        if option != name:
            if option > name:
                if best:
                    if option < best:
                        best = option
                else:
                    best = option
    if best:
        return best
    return "sem resposta"
