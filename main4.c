#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("************************************\n");
    printf("* Bem vindo ao Jogo de Adivinhação *\n");
    printf("************************************\n");

    int chute;
    int acertou = 0;
    int tentativas = 1;
    double pontos = 1000;

    srand(time(0));
    int numerosecreto = rand() % 100;

    int nivel;
    int numeroDeTentativas;
    printf("Escolha a dificuldade:\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    scanf("%d", &nivel);

    switch (nivel)
    {
    case 1:
        numeroDeTentativas = 20;
        break;
    case 2:
        numeroDeTentativas = 10;
        break;
    case 3:
        numeroDeTentativas = 5;
        break;
    }

    while (!acertou)
    {

        printf("Qual é o seu %d. chute?\n\n", tentativas);
        scanf("%d", &chute);

        if (chute < 0)
        {
            printf("Você não pode chutar números negativos\n");
            continue;
        }

        if (pontos <= 0)
        {
            break;
        }

        printf("Seu %d. chute foi %d\n", tentativas, chute);

        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if (maior)
        {
            printf("Seu chute foi maior do que o número secreto!\n\n");
        }
        else
        {
            printf("Seu chute foi menor do que o número secreto!\n\n");
        }

        if (tentativas == numeroDeTentativas)
        {
            break;
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }

    if (acertou)
    {
        printf("Parabéns! Você acertou!\n");
        printf("Você fez %.2f pontos!\n", pontos);
    }
    else
    {
        printf("Você chegou em %.2f pontos.\n", pontos);
        printf("Você falhou, tente novamente.\n\n");
    }
}