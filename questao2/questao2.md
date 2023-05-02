# Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória.

_int i=5, *p;_

_p = &i;_

_printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);_

# Resposta:
**ffe 5 5 15 9**

Isso ocorre porque o endereço de memória de 'i' é 4094 que em hexadecimal é **'ffe'**, pois no **printf()** foi usado o modificador '%x' que imprime o valor em hexadecimal. O valor de 'i' é 5, logo o valor de '*p' é 5, e como foi somado 2, o valor de '*p+2' é 7. O valor de 'p' é o endereço de 'i', logo o valor de '&p' é o endereço de 'p', que é o endereço de 'i', logo o valor de '\*\*&p' é o valor de 'i', que é 5. O valor de 'p' é o endereço de 'i', logo o valor de '\*p' é o valor de 'i', que é 5, logo o valor de '3\*\*p' é 15. O valor de \*\*&p é o valor de 'i', que é 5, logo o valor de '\*\*&p+4' é **9**.