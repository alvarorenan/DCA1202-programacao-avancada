A ponteiro para uma função é uma variável que armazena o endereço de uma função em C. Ele é usado para passar uma função como argumento para outra função, permitindo que a função chamada seja escolhida em tempo de execução. O uso de ponteiros para funções é um recurso avançado em C, que permite uma programação mais flexível e eficiente [2].

Segue abaixo um exemplo de como declarar, atribuir e chamar uma função através de um ponteiro para função em C:
```
// Declaração da função
int soma(int a, int b) {
return a + b;
}

// Declaração do ponteiro para função
int (*pont_soma)(int, int);

// Atribuição do endereço da função ao ponteiro
pont_soma = &soma;

// Chamada da função através do ponteiro
int resultado = (*pont_soma)(2, 3);
printf("Resultado da soma: %d\n", resultado);
```
Este código declara uma função "soma" que retorna a soma de dois inteiros. Em seguida, declara um ponteiro para função chamado "pont_soma" que pode apontar para uma função que recebe dois inteiros e retorna um inteiro. Em seguida, o endereço da função "soma" é atribuído ao ponteiro para função "pont_soma". Finalmente, a função "soma" é chamada através do ponteiro para função "pont_soma", passando os argumentos 2 e 3. O resultado da soma é impresso na tela [2].

References:

[1] <a href=http://www.univasf.edu.br/~marcelo.linder/arquivos_pc/aulas/aula20.pdf>Ponteiro para funções </a>

[2] <a href=https://www.pucsp.br/~so-comp/cursoc/aulas/ca50.html>Curso de C</a>

[3] <a href=https://pt.wikibooks.org/wiki/Programar_em_C/Ponteiros>Programar em C/Ponteiros</a>