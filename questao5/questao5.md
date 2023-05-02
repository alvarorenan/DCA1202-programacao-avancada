# Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas).

```
int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i);
  printf("vet[%d] = %.1f",i, vet[i]);
  printf("*(f + %d) = %.1f",i, *(f+i));
  printf("&vet[%d] = %X",i, &vet[i]);
  printf("(f + %d) = %X",i, f+i);
  }
}
```

## Respostas:

**contador/valor/valor/endereco/endereco**

**i = 0vet[0] = 1.1\*(f + 0) = 1.1&vet[0] = 61FF04(f + 0) = 61FF04**

**i = 1vet[1] = 2.2\*(f + 1) = 2.2&vet[1] = 61FF08(f + 1) = 61FF08**

**i = 2vet[2] = 3.3\*(f + 2) = 3.3&vet[2] = 61FF0C(f + 2) = 61FF0C**

**i = 3vet[3] = 4.4\*(f + 3) = 4.4&vet[3] = 61FF10(f + 3) = 61FF10**

**i = 4vet[4] = 5.5\*(f + 4) = 5.5&vet[4] = 61FF14(f + 4) = 61FF14**
   
## Explicação:

O programa em questão cria um array de 5 elementos do tipo float e o preenche com os valores: 1.1, 2.2, 3.3, 4.4 e 5.5. Em seguida, é criado um ponteiro do tipo float e é atribuído a ele o endereço do primeiro elemento do array.

O programa então entra em um loop que itera de 0 a 4 e a cada iteração, imprime na tela o contador, o valor do elemento correspondente do array, o valor apontado pelo ponteiro na posição atual, o endereço do elemento correspondente do array e o endereço apontado pelo ponteiro na posição atual.
