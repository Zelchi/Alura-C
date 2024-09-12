#include <stdio.h>
#include <locale.h>
#define NUMERO_DE_TENTATIVAS 5

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Imprime cabeçalho do jogo.
    printf("|-----------------------|\n");
    printf("|  Jogo de adivinhação  |\n");
    printf("|-----------------------|\n");

    int numeroSecreto = 5;
    int chute;

    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++)
    {
        printf("|   Tentativa %d de %d    |\n", i, NUMERO_DE_TENTATIVAS);
        printf("|     Entre 1 e 10      |\n");
        printf("|-----------------------|\n");
        printf("Chute:");
        scanf("%d", &chute);

        if (chute <= 0)
        {
            printf("Você não pode chutar zero e números negativos!\n");
            printf("|-----------------------|\n");
            i--;
            continue;
        }
        if (chute > 10)
        {
            printf("O número não pode ser maior que 10\n");
            printf("|-----------------------|\n");
            i--;
            continue;
        }

        int acertou = (chute == numeroSecreto);
        if (acertou)
        {
            printf("Você acertou!\nObrigado por jogar!\n");
            printf("|-----------------------|\n");
            break;
        }
        else
        {
            int errou = (chute > numeroSecreto);
            if (errou)
            {
                printf("Você errou!, o numero é menor.\n");
            }
            else
            {
                printf("Você errou!, o numero é maior.\n");
            }
        }
        printf("|-----------------------|\n");
    }
    return 0;
}