# O que fazem os seguintes programas em C?
```
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i));
  }
}
```
```
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
}
```

## Respostas:   
**1º programa:**
```
4 9 13
```
**2º programa:**
```
61FF10 61FF14 61FF18 //ESSE RESULTADO PODE VARIAR DE MÁQUINA PARA MÁQUINA
```
## Explicação:
O primeiro programa em C declara um array de inteiros chamado vet com três elementos inicializados com os valores 4, 9 e 13. Em seguida, ele usa um loop for para percorrer o array e imprimir o valor de cada elemento usando a notação de ponteiro, ou seja, *(vet+i), onde i é o índice do elemento atual.

O resultado de execução será a impressão dos valores 4 9 13 na saída padrão.

O segundo programa em C também declara um array de inteiros chamado vet com três elementos inicializados com os valores 4, 9 e 13. Em seguida, ele usa um loop for para percorrer o array e imprimir o endereço de memória de cada elemento usando a notação de ponteiro, ou seja, vet+i.

O resultado de execução será a impressão dos endereços de memória de cada elemento do array em formato hexadecimal na saída padrão.

