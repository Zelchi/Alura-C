#include <stdio.h>
#include <locale.h>
#include <string.h>

void abertura()
{
    printf("|----------------------|\n");
    printf("|--- Jogo de Forca  ---|\n");
    printf("|----------------------|\n\n");
}

void chuta(char chutes[26], int tentativas)
{
    char chute;
    printf("Qual letra? ");
    scanf(" %c", &chute);

    chutes[tentativas] = chute;
    tentativas++;
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char palavrasecreta[20];
    sprintf(palavrasecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    abertura();

    int palavra = strlen(palavrasecreta);
    do
    {

        for (int i = 0; i < palavra; i++)
        {
            int achou = 0;

            for (int j = 0; j < tentativas; j++)
            {
                if (chutes[j] == palavrasecreta[i])
                {
                    achou = 1;
                    break;
                }
            }

            if (achou)
            {
                printf("%c ", palavrasecreta[i]);
            }
            else
            {
                printf("_ ");
            }
        }
        printf("\n");

        chuta(chutes, tentativas);

    } while (!acertou && !enforcou);
}