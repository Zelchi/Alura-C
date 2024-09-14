#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int fator1 = 0;
    int fator2;
    printf("-----Calculadora-----\n");
    printf("Escolha uma tabuada:");
    scanf("%d", &fator2);

    for (int i = 0; i <= 10; i++) {
        int produto = fator1 * fator2;
        printf("%dx%d=%d\n", fator2, fator1, produto);
        fator1++;
    }
}