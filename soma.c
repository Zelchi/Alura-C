#include <stdio.h>
#include <locale.h>

void calcular(int *x, int *y)
{
    int resultado = (*x) + (*y);
    printf("Resultado: %d\n", resultado);
};

void loop(int *repetir)
{
    int resposta;
    printf("Deseja repetir? (1) Sim ou (0) Não\n");
    scanf("%d", &resposta);
    if (resposta)
    {
        (*repetir) = 1;
    }
    else
    {
        (*repetir) = 0;
    }
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int repetir = 0;

    do
    {
        int x;
        int y;

        printf("Numero X: ");
        scanf("%d", &x);
        printf("Numero Y: ");
        scanf("%d", &y);
        calcular(&x, &y);
        loop(&repetir);
    } while (repetir == 1);
};