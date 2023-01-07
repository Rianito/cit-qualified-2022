#include <stdio.h>

void main()
{
    // ENTRADA
    int i, combustivel, consumo, postos_de_gasolina[100];

    printf("Combustivel: ");
    scanf("%d", &combustivel);

    printf("Consumo: ");
    scanf("%d", &consumo);

    printf("Postos de gasolina: ");
    while (scanf("%d", &postos_de_gasolina[i]) == 1)
    {
        i++;
    }

    // PROCESSAMENTO
    int max_distance = consumo * combustivel;
    int actual_distance = 0;
    for (int j = 0; j < i; j++)
    {
        if (postos_de_gasolina[j] <= max_distance && postos_de_gasolina[j] > actual_distance)
        {
            actual_distance = postos_de_gasolina[j];
        }
    }

    // SAIDA
    printf("Ultima parada: %d\n", actual_distance);
}