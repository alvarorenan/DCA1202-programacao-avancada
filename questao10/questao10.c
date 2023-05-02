#include <stdio.h>
#include <stdlib.h>

int main() {
    char char_x[4];
    int int_x[4];
    float float_x[4];
    double double_x[4];

    printf("Endereços com x declarado como char:\n");
    for(int i = 0; i < 4; i++) {
        printf("%d ", &char_x[i]);
    }
    printf("\nEndereços com x declarado como int:\n");
    for(int i = 0; i < 4; i++) {
        printf("%d ", &int_x[i]);
    }
    printf("\nEndereços com x declarado como float:\n");
    for(int i = 0; i < 4; i++) {
        printf("%d ", &float_x[i]);
    }
    printf("\nEndereços com x declarado como double:\n");
    for(int i = 0; i < 4; i++) {
        printf("%d ", &double_x[i]);
    }

    return 0;
}