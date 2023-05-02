#include "lista_encadeada.h"
#include <stdlib.h>
#include <stdio.h>

lista_enc_int* leiStart(int cabeca){
    lista_enc_int* head;
    head = (lista_enc_int*) malloc(sizeof(lista_enc_int));
    head->valor = cabeca;
    head->prox = 0;
    return head;
}

void leiDestruct(lista_enc_int* lista){
    if(lista->prox != 0){
        leiDestruct(lista->prox);
    }
    free(lista);
}

void leiAddLast(lista_enc_int* lista, int valor){
    if(lista->prox != 0){
        leiAddLast(lista->prox, valor);
    } else {
        lista->prox = leiStart(valor);
    }
}

void leiAddPos(lista_enc_int* lista, int pos, int valor){
    if(pos <= 0){
        lista_enc_int* node = leiStart(lista->valor);
        node->prox = lista->prox;
        lista->prox = node;
        lista->valor = valor;      
    } else {
        leiAddPos(lista->prox, pos-1, valor);
    }

}

int leiDelPos(lista_enc_int* lista, int pos){
    printf("Chamou o metodo leiDelPos.\n");
    return 0;
}

int leiGetPos(lista_enc_int* lista, int pos){
    printf("Chamou o metodo leiGetPos.\n");
    return 0;
}

int leiGetTam(lista_enc_int* lista){
    if(lista->prox == 0){
        return 1;
    }
    return leiGetTam(lista->prox) + 1;
}

