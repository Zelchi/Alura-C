#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("|----Multiplicação----\n");

    int numeroX;
    int numeroY;
    printf("|Numero X: ");
    scanf("%d", &numeroX);
    printf("|Numero Y: ");
    scanf("%d", &numeroY);

    int multi = numeroX * numeroY;
    printf("|Resultado: %d\n", multi);
    printf("|---------------------");

    return 0;
}