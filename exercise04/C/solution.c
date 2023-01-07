#include <stdio.h>
#include <string.h>

typedef struct
{
    char termo[8];
    int count;
    int index;
} element;

int find(int start, char *texto, char *termo)
{
    int i = 0;
    int count = 0;

    for (i = start; i < strlen(texto); i++)
    {
        if (texto[i] == termo[count])
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count == strlen(termo))
        {
            return i;
        }
    }
    return -1;
}

int count(char *texto, char *termo)
{
    int i = 0;
    int count = 0;

    while (find(i, texto, termo) != -1)
    {
        i = find(i, texto, termo) + 1;
        count++;
    }
    return count;
}

int maxElement(element elementA, element elementB)
{
    if (elementA.count > elementB.count)
    {
        return 1;
    }
    else if (elementA.count == elementB.count)
    {
        if (elementA.index < elementB.index)
        {
            return 1;
        }
    }
    return 0;
}

void sortElements(element *elementos, int n, int start, int k)
{
    if (start == k)
    {
        return;
    }

    int maior = start;
    int i;
    for (i = start; i < n; i++)
    {
        if (maxElement(elementos[i], elementos[maior]))
        {
            maior = i;
        }
    }
    element temp = elementos[start];
    elementos[start] = elementos[maior];
    elementos[maior] = temp;
    sortElements(elementos, n, start + 1, k);
}

void main()
{

    // ENTRADA

    // ENTRADA DO TEXTO
    // printf("Digite o texto: ");
    char texto[128] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua";
    // scanf("%[^\n]", texto);

    // ENTRADA DO TAMANHO DO VETOR DE QUERIES
    // printf("Digite o número de queries: ");
    int n = 4;
    // scanf("%d", &n);

    // ENTRADA DAS QUERIES
    char queries[4][8] = {"a", "em", "i", "el"};
    // for (int i = 0; i < n; i++)
    //{
    //     printf("Digite a query %d: ", i + 1);
    //     scanf("%s", queries[i]);
    // }

    // ENTRADA DO TAMANHO DOS RESULTADOS
    // printf("Digite o valor de k: ");
    int k = 2;
    // scanf("%d", &k);

    // PROCESSAMENTO

    // CRIAÇÃO DO VETOR DE ELEMENTOS
    element elements[n];

    // PREENCHIMENTO DO VETOR DE ELEMENTOS
    for (int i = 0; i < n; i++)
    {
        strcpy(elements[i].termo, queries[i]);
        elements[i].count = count(texto, queries[i]);
        elements[i].index = find(0, texto, queries[i]);
    }

    // ORDENAÇÃO DOS ELEMENTOS
    sortElements(elements, n, 0, k);

    // SAÍDA

    printf("As %d queries mais frequentes são:\n", k);
    int i;
    for (i = 0; i < k; i++)
    {
        printf("%s | %d | %i\n", elements[i].termo, elements[i].count, elements[i].index);
    }
}