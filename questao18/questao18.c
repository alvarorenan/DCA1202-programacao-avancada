#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int **a, int **b, int **result, int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int m, n, p;
    printf("Digite o número de linhas da primeira matriz: ");
    scanf("%d", &m);
    printf("Digite o número de colunas da primeira matriz: ");
    scanf("%d", &n);
    printf("Digite o número de colunas da segunda matriz: ");
    scanf("%d", &p);

    int **a = malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        a[i] = malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            printf("Digite o elemento [%d][%d] da primeira matriz: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int **b = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        b[i] = malloc(p * sizeof(int));
        for (int j = 0; j < p; j++) {
            printf("Digite o elemento [%d][%d] da segunda matriz: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    int **result = malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        result[i] = malloc(p * sizeof(int));
    }

    multiplyMatrices(a, b, result, m, n, p);

    //imprime matriz A
    printf("A matriz A é:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    //imprime matriz B
    printf("A matriz B é:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    //imprime matriz resultante
    printf("O resultado da multiplicação é:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++) {
        free(a[i]);
        free(result[i]);
    }
    free(a);
    free(result);

    for (int i = 0; i < n; i++) {
        free(b[i]);
    }
    free(b);

    return 0;
}