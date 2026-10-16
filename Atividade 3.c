#include <stdio.h>

int main(void) {
    float nota, soma = 0.0, media;

    for (int i = 1; i <= 10; i++) {
        do {
            printf("Nota do cliente %d (0 a 10): ", i);
            scanf("%f", &nota);

            if (nota < 0 || nota > 10) {
                printf("Nota invalida! Digite um valor entre 0 e 10.\n");
            }
        } while (nota < 0 || nota > 10);

        soma += nota;
    }

    media = soma / 10;

    printf("\nMedia geral do atendimento: %.2f\n", media);

    if (media < 7) {
        printf("ALERTA: a media esta abaixo de 7! O atendimento precisa melhorar.\n");
    }

    return 0;
}
