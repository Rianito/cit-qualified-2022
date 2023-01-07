#include <stdio.h>

int myPow(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int binaryToDecimal(char *bin)
{
    int i = 0;
    int result = 0;
    for (i = 0; i < 10; i++)
    {
        if (bin[i] == '1')
        {
            result += myPow(2, 9 - i);
        }
    }
    return result;
}

char getPredominant(char *handler)
{
    int count = 0;
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        if (handler[i] == '1')
        {
            count++;
        }
    }
    if (count >= 5)
    {
        return '1';
    }
    return '0';
}

void main()
{

    // ENTRADA
    char password[10][10];
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%s", password[i]);
    }

    // PROCESSAMENTO
    char handler[10];
    char password_bin[10];
    int j = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            handler[j] = password[j][i];
        }
        password_bin[i] = getPredominant(handler);
    }

    // SAIDA
    printf("Senha dec: %d\n", binaryToDecimal(password_bin));
}
