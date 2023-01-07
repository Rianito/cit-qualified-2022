def calcula_total_leds(altura, largura):
    if not (altura > 0 and largura > 0):
        return False
    vert_x = largura + 1
    return vert_x + (altura * vert_x)
