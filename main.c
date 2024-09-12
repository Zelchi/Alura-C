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

    if (chute == numeroSecreto)
    {
        printf("Você acertou!\n");
    }
    else
    {
        if (chute > numeroSecreto){
            printf("Você errou!, o numero é menor.\n");
        } 
        else
        {
            printf("Você errou!, o numero é maior.\n");
        }
    }
    return 0;
}