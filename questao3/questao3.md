# Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões deatribuição são ilegais?
```
p = i;
q = &j;
p = &*&i;
i = (*&)j;
i = *&j;
i = *&*&j;
q = *p;
i = (*p)++ + *q;
```
## Respostas:
1. **p = i;** - p é um ponteiro para inteiro e i é um inteiro, portanto, são tipos diferentes.

2. **q = &j;** - q é um ponteiro para inteiro e &j é um endereço de inteiro, portanto, são tipos diferentes. Além disso, &j não é uma variável, logo não pode ser usado como ponteiro.

3. **i = (*&)j;** - &j é um endereço de inteiro, portanto, não pode ser usado como ponteiro.
4. **q = \*p;** - q é um ponteiro para inteiro e *p é um inteiro, portanto, são tipos diferentes. Além disso, *p não é uma variável, logo não pode ser usado como ponteiro.

5. **i = (\*p)++ + \*q;** - *p é um inteiro, portanto, não pode ser usado como ponteiro. É legal, mas pode não ter o comportamento esperado, já que está incrementando o valor apontado por p. Como p não está apontando para uma variável válida, essa operação pode resultar em um comportamento indefinido. No entanto, a expressão em si é sintaticamente válida em C.
