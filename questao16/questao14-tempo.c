#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função de comparação para o qsort
int comparaInt(const void *a, const void *b) {
    const int *ia = (const int *) a;
    const int *ib = (const int *) b;
    return (*ia > *ib) - (*ia < *ib);
}

int main() {
    int tamanho;
    printf("Informe o tamanho do array: ");
    scanf("%d", &tamanho);

    // Aloca dinamicamente um array de inteiros com o tamanho informado
    int *arr = (int *) malloc(tamanho * sizeof(int));

    // Preenche o array com valores informados pelo usuário
    for (int i = 0; i < tamanho; i++) {
        printf("Informe o valor %d do array: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Mede o tempo de execução do algoritmo de ordenação
    clock_t tempo_inicial = clock();
    qsort(arr, tamanho, sizeof(int), comparaInt);
    clock_t tempo_final = clock();
    double tempo_total = (double) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;

    // Imprime o array ordenado e o tempo de execução
    printf("Array ordenado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Tempo de execução: %.5f segundos\n", tempo_total);

    // Libera a memória alocada para o array
    free(arr);

    return 0;
}
