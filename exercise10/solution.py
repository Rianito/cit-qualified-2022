def shuffle_musicas(musicas_tocadas: list):
    nova_lista = []
    musicas_tocadas.sort()
    while len(musicas_tocadas) > 0:
        try:
            nova_lista.append(musicas_tocadas[-1])
            musicas_tocadas.pop(-1)
            nova_lista.append(musicas_tocadas[0])
            musicas_tocadas.pop(0)
        except IndexError:
            return nova_lista
    return nova_lista
