# Introdução

Repositório criado para armazenar exemplos de estruturas de dados lineares em C.

Implementações de:
1. Lista Encadeada.
2. Pilha.
3. Fila.

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

## Pilha

Nesse projeto estão implementadas as funções:

* siStart: inicializa uma nova pilha. Retorna um ponteiro para a pilha inicializada.

* siDestruct: destroi completamente a pilha e todos os seus elementos;

* siPush: adiciona um novo elemento (valor) na cabeça da pilha;

* siPop: remove o elemento presente na cabeça da pilha e retorna seu valor;

* siGetTam: calcula o tamanho total da pilha.

## File

Nesse projeto estão implementadas as funções:

* qiStart: inicializa uma nova fila. Retorna um ponteiro para a fila inicializada.

* qiDestruct: destroi completamente a fila e todos os seus elementos;

* qiEnqueue: adiciona um novo elemento (valor) no final (rear) da fila;

* qiDequeue: remove o elementeo presente no início (front) da fila e retorna seu valor;

* qiGetTam: calcula o tamanho total da fila.


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
