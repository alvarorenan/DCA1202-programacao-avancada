#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    float *arr, temp;

    printf("Digite o número de valores que deseja ordenar: ");
    scanf("%d", &n);

    arr = (float*) malloc(n * sizeof(float));

    printf("Digite os valores:\n");
    for(i=0; i<n; i++) {
        scanf("%f", &arr[i]);
    }

    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Valores em ordem crescente:\n");
    for(i=0; i<n; i++) {
        printf("%f ", arr[i]);
    }

    free(arr);

    return 0;
}

/*
Explicação:
    O programa ordena os valores digitados pelo usuário em ordem crescente.
    Para isso, é alocado um vetor de floats com o tamanho especificado pelo usuário.
    Em seguida, os valores são lidos e armazenados no vetor.
    Por fim, o vetor é ordenado e os valores são impressos na tela.
*/