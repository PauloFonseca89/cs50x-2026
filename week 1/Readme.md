# Week 1 - C

Exercicios da Week 1 do CS50x, focados nos primeiros programas em C.

## Conteudo

- `hello.c`: imprime `hello, world` no terminal.
- `me/hello.c`: pede o nome do usuario e imprime uma saudacao personalizada.
- `python/mario.c`: pede uma altura entre 1 e 8 e imprime as duas piramides do Mario.

## Como compilar e executar

### Hello

```bash
make hello
./hello
```

Saida esperada:

```text
hello, world
```

### Me

Dentro da pasta `me`:

```bash
make hello
./hello
```

Exemplo:

```text
What is your name? Adele
hello, Adele
```

### Mario

Dentro da pasta `python`:

```bash
make mario
./mario
```

Exemplo:

```text
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
```

## Conceitos praticados

- Estrutura basica de um programa em C
- Uso de `#include`
- Funcao `main`
- `printf`
- Strings com a biblioteca do CS50
- Entrada do usuario com `get_string`
- Entrada de numeros com `get_int`
- Validacao de entrada com `do while`
- Loops aninhados com `for`
