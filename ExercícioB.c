#include <stdio.h>

void calculo(int nascimento);

int main() {
    int nascimento;

    scanf("%d", &nascimento);
    calculo(nascimento);

    return 0;
}
void calculo(int nascimento) {
    int anoMillennial;
    int anoAtual = 2025;

    anoMillennial = nascimento - (anoAtual - nascimento);

    printf("%d\n", anoMillennial);
}