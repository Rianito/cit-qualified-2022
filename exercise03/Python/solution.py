def getPredominant(binaries):
    if binaries.count("1") >= binaries.count("0"):
        return "1"
    return "0"


def calcula_numero_da_senha(senha):
    password_bin = ""
    for i in range(10):
        actual_column = ""
        for binaries in senha:
            actual_column += binaries[i]
        password_bin += getPredominant(actual_column)
    return int(password_bin, base=2)
