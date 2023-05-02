#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função de comparação a ser usada pelo qsort()
int compara_floats(const void *a, const void *b) {
    // Convertendo os ponteiros para float e obtendo os valores
    float fa = *(const float*)a;
    float fb = *(const float*)b;

    // Retornando 1 se fa > fb, -1 se fa < fb e 0 se fa == fb
    return (fa > fb) - (fa < fb);
}

int main() {
    int n;
    float *valores;

    printf("Digite a quantidade de valores a serem lidos: ");
    scanf("%d", &n);

    // Alocando memória para n valores do tipo float
    valores = (float*) malloc(n * sizeof(float));

    // Lendo os valores
    for (int i = 0; i < n; i++) {
        printf("Digite o valor #%d: ", i+1);
        scanf("%f", &valores[i]);
    }

    // Ordenando os valores com qsort(), utilizando a função de comparação definida acima
    qsort(valores, n, sizeof(float), compara_floats);

    // Imprimindo os valores ordenados
    printf("Valores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%f\n", valores[i]);
    }

    // Liberando a memória alocada
    free(valores);

    return 0;
}