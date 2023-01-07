def ultima_parada(combustivel: int, consumo: int, postos_de_gasolina: list[int]) -> int:
    max_distance = consumo*combustivel
    actual_distance = 0
    for posto_distance in postos_de_gasolina:
        if posto_distance <= max_distance and posto_distance > actual_distance:
            actual_distance = posto_distance
    return actual_distance
