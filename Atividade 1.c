#include <stdio.h>

int main(void) {
    float consumo, soma = 0.0;

    for (int i = 1; i <= 5; i++) {
        printf("Consumo mensal do morador %d (em m3): ", i);
        scanf("%f", &consumo);

        soma += consumo;

        if (consumo <= 20) {
            printf("Morador %d: %.2f m3 -> dentro da media (ate 20 m3)\n\n", i, consumo);
        } else {
            printf("Morador %d: %.2f m3 -> ACIMA da media (limite 20 m3)\n\n", i, consumo);
        }
    }

    printf("Consumo medio geral: %.2f m3\n", soma / 5);

    return 0;
}
