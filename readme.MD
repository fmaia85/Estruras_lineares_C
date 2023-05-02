# Introdução

Repositório criado para armazenar exemplos de estruturas de dados lineares em C.

Implementações de:
1. Lista Encadeada.

As implementações funcionam apenas para valores de tipo inteiro.

## Lista Encadeada

As implementações de lista encadeada utilizam algoritmos recursivos.
Isso simplifica o entendimento das funções implementadas.

Nesse projeto estão implementadas as funções:

* leiStart: inicializa uma nova lista. Recebe um valor inteiro que é o valor do primeiro elemento da lista. Retorna um ponteiro para a lista inicializada.

* leiDestruct: destroi completamente a lista e todos os seus elementos;

* leiAddLast: adiciona um novo elemento (valor) no fim da lista;

* leiAddPos: adiciona um novo elemento (valor) em uma posição específica (pos) da lista;

* leiDelPos: remove o elemente presente em uma posição específica (pos);

* leiGetPos: obtem o valor de um elemento em uma posição específica (pos);

* leiGetTam: calcula o tamanho total da lista.



## Compilação

Para compilar, executar no terminal:

```
make compile
```

## Testes

Após compilar a aplicação, executar:

```
make run
```

## All

Também é possível compilar e executar, simplesmente chamando o script make:
```
make 
```
