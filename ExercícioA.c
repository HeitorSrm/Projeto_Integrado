#include <stdio.h>

void soma(int Filhos);

int main() {
    int quant=0;

    scanf("%d", &quant);
    soma(quant);

    return 0;
}
void soma(int Filhos) {
    int soma = 0;
    int F;
    for (int i = 1; i <= Filhos; i++) {
        scanf("%d", &F);
        if (F >= 0 && F <= 1000) {
            soma += F;
        }
    } printf("%d\n", soma);
}