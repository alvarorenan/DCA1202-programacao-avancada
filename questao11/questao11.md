# Suponha que as seguintes declarações tenham sido realizadas:
```
float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;
```
# Identifique quais dos seguintes comandos é válido ou inválido:
```
aloha[2] = value; //1
scanf("%f", &aloha); //2
aloha = value; //3
printf("%f", aloha); //4
coisas[4][4] = aloha[3]; //5
coisas[5] = aloha; //6
pf = value; //7
pf = aloha; //8
```
# Respostas:

1. _aloha[2]=value_ **Válido** - atribui o valor de 'value' ao terceiro elemento do vetor 'aloha'

2. _scanf("%f", &aloha)_ **Inválido** - o comando de leitura 'scanf' espera uma variável como segundo argumento, mas 'aloha' é um vetor

3. _aloha = value_ **Inválido** -  'aloha' é um vetor, não pode ser atribuído diretamente com um valor escalar

4. _printf("%f", aloha)_ **Inválido** - aloha é um vetor e não uma variável escalar, não pode ser usado como argumento para a função 'printf' desta maneira

5. _coisas[4][4] = aloha[3]_ **Válido** - aloha[3] é um float e coisas[4][4] também, logo válido.

6. _coisas[5] = aloha_ **Inválido** - coisas[5] é um vetor de float, logo não pode ser atribuído a um float, logo inválido.

7. _pf = value_ **Inválido** - pf é um ponteiro para float, logo não pode ser atribuído a um float, logo inválido.

8. _pf = aloha_ **Válido** - aloha é um vetor de float, logo válido.
