#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Imprime cabeçalho do jogo.
    printf("***********************\n");
    printf("* Jogo de adivinhação *\n");
    printf("***********************\n");

    int numeroSecreto = 5;
    int chute;

    printf("Escolha um numero: ");
    scanf("%d", &chute);

    int acertou = (chute == numeroSecreto);
    if (acertou)
    {
        printf("Você acertou!\n");
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
    return 0;
}