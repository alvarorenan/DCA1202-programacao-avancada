#include <stdio.h>

void soma_vetores(int vet1[], int vet2[], int resultado[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vet1[i] + vet2[i];
    }
}

int main() {
    int tamanho;
    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int vet1[tamanho], vet2[tamanho], resultado[tamanho];

    printf("Preencha o primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vet1[i]);
    }

    printf("Preencha o segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vet2[i]);
    }

    soma_vetores(vet1, vet2, resultado, tamanho);

    printf("Resultado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}