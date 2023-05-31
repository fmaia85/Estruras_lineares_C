#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

queue_int* qiStart(){
    queue_int* nq = (queue_int*)malloc(sizeof(queue_int));
    nq->tam = 0;
    nq->front = 0;
    nq->rear = 0;
    return nq;
}

void qiDestruct(queue_int* fila){
    while(fila->tam > 0){
        qiDequeue(fila);
    }
    free(fila);
}

void qiEnqueue(queue_int* fila, int valor){
    node_queue_int* nn = (node_queue_int*)malloc(sizeof(node_queue_int));
    nn->valor = valor;
    nn->prox = 0;
    if(fila->tam == 0){
        fila->front = nn;
    } else {
        fila->rear->prox = nn;
    }
    fila->rear = nn;
    fila->tam+=1;
}

int qiDequeue(queue_int* fila){
    int v = 0;
    if(fila->tam > 0){
      node_queue_int* en = fila->front;
      fila->front = en->prox;
      fila->tam-=1;
      v = en->valor;
      free(en);
    }
    return v;
}

int qiGetTam(queue_int* fila){
    return fila->tam;
}