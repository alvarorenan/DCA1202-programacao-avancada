# Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique seforam obtidas as respostas esperadas).

```
int main() {
  int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;
    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);
    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n",temp);
    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);
    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);
    /* (e) */
    p3 = nome;
    printf("%c \n", *p3);
    /* (f) */
    p3 = p3 + 4;
    printf("%c \n", *p3);
    /* (g) */
    p3--;
    printf("%c \n", *p3);
    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);
    /* (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);
    /* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);
    /* (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);
    /* (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);
    /* (n) */
    p5++;
    printf("%d \n", *p5);
  ```

## Respostas:

### (a) 20

### (b) 29.0

### (c) P

### (d) e

### (e) P

### (f) e

### (g) t

### (h) 31

### (i) 45

### (j) 27

### (l) 31

### (m) 45

### (n) 27

## Passo a passo

### (a) valor = 10; p1 = &valor; *p1 = 20; printf("%d \n", valor);

valor = 10; // valor recebe 10

p1 = &valor; // p1 recebe o endereço de valor

*p1 = 20; // o valor de p1 recebe 20

printf("%d \n", valor); // imprime o valor de valor, que é 20

### (b) temp = 26.5; p2 = &temp; *p2 = 29.0; printf("%.1f \n",temp);

temp = 26.5; // temp recebe 26.5

p2 = &temp; // p2 recebe o endereço de temp

*p2 = 29.0; // o valor de p2 recebe 29.0

printf("%.1f \n",temp); // imprime o valor de temp, que é 29.0

### (c) p3 = &nome[0]; aux = *p3; printf("%c \n", aux);

p3 = &nome[0]; // p3 recebe o endereço de nome[0], que é P

aux = *p3; // aux recebe o valor de p3, que é P

printf("%c \n", aux); // imprime o valor de aux, que é P

### (d) p3 = &nome[4]; aux = *p3; printf("%c \n", aux);

p3 = &nome[4]; // p3 recebe o endereço de nome[4], que é e

aux = *p3; // aux recebe o valor de p3, que é e

printf("%c \n", aux); // imprime o valor de aux, que é e

### (e) p3 = nome; printf("%c \n", *p3);

p3 = nome; // p3 recebe o endereço de nome, que é P

printf("%c \n", *p3); // imprime o valor de p3, que é P

### (f) p3 = p3 + 4; printf("%c \n", *p3);

p3 = p3 + 4; // p3 recebe o endereço de p3 + 4, que é e

printf("%c \n", *p3); // imprime o valor de p3, que é e

### (g) p3--; printf("%c \n", *p3);

p3--; // p3 recebe o endereço de p3 - 1, que é t

printf("%c \n", *p3); // imprime o valor de p3, que é t

### (h) vetor[0] = 31; vetor[1] = 45; vetor[2] = 27; p4 = vetor; idade = *p4; printf("%d \n", idade);

vetor[0] = 31; // vetor[0] recebe 31

vetor[1] = 45; // vetor[1] recebe 45

vetor[2] = 27; // vetor[2] recebe 27

p4 = vetor; // p4 recebe o endereço de vetor[0], que é 31

idade = *p4; // idade recebe o valor de p4, que é 31

printf("%d \n", idade); // imprime o valor de idade, que é 31

### (i) p5 = p4 + 1; idade = *p5; printf("%d \n", idade);

p5 = p4 + 1; // p5 recebe o endereço de p4 + 1, que é 45

idade = *p5; // idade recebe o valor de p5, que é 45

printf("%d \n", idade); // imprime o valor de idade, que é 45

### (j) p4 = p5 + 1; idade = *p4; printf("%d \n", idade);

p4 = p5 + 1; // p4 recebe o endereço de p5 + 1, que é 27

idade = *p4; // idade recebe o valor de p4, que é 27

printf("%d \n", idade); // imprime o valor de idade, que é 27

### (l) p4 = p4 - 2; idade = *p4; printf("%d \n", idade);

p4 = p4 - 2; // p4 recebe o endereço de p4 - 2, que é 31

idade = *p4; // idade recebe o valor de p4, que é 31

printf("%d \n", idade); // imprime o valor de idade, que é 31

### (m) p5 = &vetor[2] - 1; printf("%d \n", *p5);

p5 = &vetor[2] - 1; // p5 recebe o endereço de vetor[2] - 1, que é 45

printf("%d \n", *p5); // imprime o valor de p5, que é 45

### (n) p5++; printf("%d \n", *p5);

p5++; // p5 recebe o endereço de p5 + 1, que é 27

printf("%d \n", *p5); // imprime o valor de p5, que é 27

