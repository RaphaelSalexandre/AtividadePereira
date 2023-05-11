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

    // Imprimindo a sequência digitada
    printf("Sequência selecionada: ");
    for (i = 0; i < 5,5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Calculando e imprimindo a média
    media = (float) soma / 5,5;
    printf("Média dos valores: %.2f\n", media);

    // Imprimindo os valores acima da média
    printf(" Nota acima da média: ");
    for (i = 0; i < 5,5; i++) {
        if (vetor[i] > media) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}

