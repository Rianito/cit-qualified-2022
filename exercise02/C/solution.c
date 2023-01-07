#include <stdio.h>

int main()
{
    // ENTRADA
    int vendas[100][100];
    int i, j;

    printf("Numero de vendedores: ");
    scanf("%d", &vendas[0][0]);

    for (i = 1; i < vendas[0][0] + 1; i++)
    {
        printf("Quantos tickets vendeu o vendedor %d? ", i);
        scanf("%d", &vendas[0][i]);
        for (j = 1; j < vendas[0][i] + 1; j++)
        {
            printf("Quanto vendeu o ticket %d? ", j);
            scanf("%d", &vendas[i][j]);
        }
    }

    // PROCESSAMENTO
    int max = 0;
    int min = 0;
    for (i = 1; i < vendas[0][0] + 1; i++)
    {
        for (j = 1; j < vendas[0][i] + 1; j++)
        {
            if (vendas[i][j] >= 20 && vendas[i][j] <= 500)
            {
                if (vendas[i][j] > max)
                {
                    max = vendas[i][j];
                }
                if (min == 0 || vendas[i][j] < min)
                {
                    min = vendas[i][j];
                }
            }
        }
    }

    // SAIDA
    printf("Menor valor de venda: %d, Maior valor de venda: %d\n", min, max);
}