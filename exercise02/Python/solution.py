def retorna_menor_e_maior_valor_de_vendas(tickets):
    maior_venda = 0
    menor_venda = 0
    for ticket in tickets:
        for venda in ticket:
            if venda >= 20 and venda <= 500:
                if venda > maior_venda:
                    maior_venda = venda
                if menor_venda == 0 or venda < menor_venda:
                    menor_venda = venda
    return [menor_venda, maior_venda]
