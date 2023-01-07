def escolhe_taxi(tf1, vqr1, tf2, vqr2):
    tf1, vqr1, tf2, vqr2 = float(tf1), float(vqr1), float(tf2), float(vqr2)
    options = ["Tanto faz", "Empresa 1", "Empresa 2"]
    det = (tf1+vqr1-tf1)-(tf2+vqr2-tf2)
    cheaper = 0
    if tf1 < tf2:
        cheaper = 1
    elif tf1 > tf2:
        cheaper = -1
    else:
        cheaper = 0

    try:
        s = round(((tf2 - tf1) - (tf2+vqr2 - tf2) * 0) / det, 2)
    except ZeroDivisionError:
        return options[cheaper]

    if det == 0 or s < 0:
        return options[cheaper]

    return f"{options[cheaper]} quando a distância < {s}, Tanto faz quando a distância = {s}, {options[-cheaper]} quando a distância > {s}"
