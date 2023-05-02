# Seja x um vetor de 4 elementos, declarado da forma TIPO x[4];. Suponha que depois dadeclaração, x esteja armazenado no endereço de memória 4092 (ou seja, o endereço de x[0]). Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais serão os valores de x+1, x+2 e x+3 se:

# ◦ x for declarado como char?

## Resposta:
### x+1 = 4093
### x+2 = 4094
### x+3 = 4095

# ◦ x for declarado como int?

## Resposta:
### x+1 = 4094
### x+2 = 4096
### x+3 = 4098

# ◦ x for declarado como float?

## Resposta:
### x+1 = 4096
### x+2 = 4100
### x+3 = 4104

# ◦ x for declarado como double?

## Resposta:
### x+1 = 4100
### x+2 = 4108
### x+3 = 4116

# Explicação:

Se x for declarado como char, cada elemento do vetor ocupará 1 byte na memória. Como o endereço de x[0] é 4092, o endereço de x[1] será 4093, o endereço de x[2] será 4094 e o endereço de x[3] será 4095.

Se x for declarado como int, cada elemento do vetor ocupará 2 bytes na memória. Como o endereço de x[0] é 4092, o endereço de x[1] será 4094, o endereço de x[2] será 4096 e o endereço de x[3] será 4098.

Se x for declarado como float, cada elemento do vetor ocupará 4 bytes na memória. Como o endereço de x[0] é 4092, o endereço de x[1] será 4096, o endereço de x[2] será 4100 e o endereço de x[3] será 4104.

Se x for declarado como double, cada elemento do vetor ocupará 8 bytes na memória. Como o endereço de x[0] é 4092, o endereço de x[1] será 4100, o endereço de x[2] será 4108 e o endereço de x[3] será 4116.

