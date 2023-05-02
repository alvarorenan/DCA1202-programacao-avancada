# Considerando a declaração int mat[4], *p, x;, quais das seguintes expressões são válidas? Justifique.

```
p = mat + 1;
p = mat++;
p = ++mat;
x = (*mat)++;
```

## Respostas:

1. p = mat + 1;: **Válida**. A variável p é um ponteiro para int, e pode ser atribuída a um endereço de memória do tipo int. A expressão mat + 1 resulta em um endereço de memória correspondente ao segundo elemento do array mat, que é do tipo int.

2. p = mat++;: **Inválida**. O operador ++ só pode ser aplicado a uma variável, e não a um array. Além disso, o tipo do operando da expressão mat++ é um array, não um ponteiro, então a expressão não faz sentido.

3. p = ++mat;: **Inválida**. O operador ++ só pode ser aplicado a uma variável, e não a um array. Além disso, o tipo do operando da expressão ++mat é um array, não um ponteiro, então a expressão não faz sentido.

4. x = (\*mat)++;: **Válida**. A variável x é do tipo int, e pode receber o valor resultante da expressão (\*mat)++. A expressão *mat resulta no valor do primeiro elemento do array mat, que é um inteiro. Em seguida, o operador ++ é aplicado ao valor do primeiro elemento, incrementando-o em 1. O valor final é atribuído à variável x.
