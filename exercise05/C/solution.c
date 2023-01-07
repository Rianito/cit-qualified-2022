#include <stdio.h>
#include <math.h>

void main()
{
    // ENTRADA

    printf("Digite o número de pessoas: ");
    int n;
    scanf("%d", &n);

    int assinante[n];
    int horas_assistidas[n];

    int i;
    for (i = 0; i < n; i++)
    {
        printf("Digite a quantidade de horas da pessoa %d: ", i + 1);
        scanf("%d", &horas_assistidas[i]);
        printf("Digite se a pessoa %d é assinante (1 para sim, 0 para não): ", i + 1);
        scanf("%d", &assinante[i]);
    }

    // PROCESSAMENTO
    int total_horas = 0;
    for (i = 0; i < n; i++)
    {
        horas_assistidas[i] = ceil(horas_assistidas[i] / 60.0);
        if (assinante[i])
        {
            horas_assistidas[i] *= 2;
        }
        total_horas += horas_assistidas[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("A pessoa %d tem %d%% de chance de ser sorteada.\n", i + 1, horas_assistidas[i] * 100 / total_horas);
    }
}
