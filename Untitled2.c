#include <stdio.h>

int main() {
    int vetor[5,5];
    int i, soma = 0;
    float media;

    // Lendo os valores do vetor
    printf("Digite os valores que serao usados no vetor:\n");
    for (i = 0; i < 5,5; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    // Imprimindo a sequ�ncia digitada
    printf("Sequ�ncia selecionada: ");
    for (i = 0; i < 5,5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Calculando e imprimindo a m�dia
    media = (float) soma / 5,5;
    printf("M�dia dos valores: %.2f\n", media);

    // Imprimindo os valores acima da m�dia
    printf(" Nota acima da m�dia: ");
    for (i = 0; i < 5,5; i++) {
        if (vetor[i] > media) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}

