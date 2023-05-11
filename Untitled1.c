#include <stdio.h>

int main() {
    int vetor[10];
    int i, maior, posicao;

    // Lendo os valores do vetor
    printf("Digite os valores do vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Imprimindo a sequ�ncia digitada
    printf("Sequ�ncia digitada: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Encontrando o maior valor e sua posi��o no vetor
    maior = vetor[0];
    posicao = 0;
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    // Imprimindo o maior valor e sua posi��o no vetor
    printf("Maior valor: %d\n", maior);
    printf("Posi��o no vetor: %d\n", posicao);

    return 0;
}
