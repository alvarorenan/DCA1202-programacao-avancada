# Seja o seguinte trecho de programa:
_int i=3,j=5;_

_int *p, *q;_

_p = &i;_

_q = &j;_


## Determine o valor das seguintes expressões: 

### 1) _p == &i;_
### 2) _*p - *q;_
### 3) _**&p;_
### 4) _3 - *p/(*q) + 7;_

## Respostas:

1. **False** - p é um ponteiro para inteiro e i é um inteiro, portanto, são tipos diferentes.

2. **-2** - *p = 3 e *q = 5, logo 3 - 5 = -2.

3. **3** - &p é o endereço de p, que é o endereço de i, logo **3**.

4. **10** - *p = 3 e *q = 5, logo 3 - 5 = -2, -2 + 7 = 5, 3 - 5 + 5 = 3 + 5 = **10**.