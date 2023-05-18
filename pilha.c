#include "pilha.h"
#include <stdlib.h>

stack_int* siStart(){
    stack_int* ns = (stack_int*)malloc(sizeof(stack_int));
    ns->tam = 0;
    ns->head = 0;
    return ns;
}

void siDestruct(stack_int* pilha){
    while(pilha->tam > 0){
        siPop(pilha);
    }
    free(pilha);
}

void siPush(stack_int* pilha, int valor){
    struct node_stack_int* nn = (struct node_stack_int*)malloc(sizeof(struct node_stack_int*));
    nn->valor = valor;
    nn->prox = pilha->head;
    pilha->head = nn;
    pilha->tam+=1;
}

int siPop(stack_int* pilha){
    int v = 0;
    if(pilha->tam > 0){
      struct node_stack_int* en = pilha->head;
      pilha->head = en->prox;
      pilha->tam-=1;
      v = en->valor;
      free(en);
    }
    return v;
}

int siGetTam(stack_int* pilha){
    return pilha->tam;
}
