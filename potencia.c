#include <stdio.h>
#include <locale.h>

int potencia(int a, int b)
{
    int resultado = 1;
    for (int i = 0; i < b; i++)
    {
        resultado = resultado * a;
    }
    return resultado;
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a;
    int b;
    int resultado;

    printf("Numero A:\n");
    scanf("%d", &a);
    printf("Numero B:\n");
    scanf("%d", &b);

    resultado = potencia(a, b);

    printf("%d", resultado);
    return 0;
}
