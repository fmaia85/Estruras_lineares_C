#ifndef _LISTA_ENCADEADA_H_
#define _LISTA_ENCADEADA_H_

struct lista_enc_int{
    int valor;
    struct lista_enc_int* prox;
};

typedef struct lista_enc_int lista_enc_int;

lista_enc_int* leiStart(int cabeca);

void leiDestruct(lista_enc_int* lista);

void leiAddLast(lista_enc_int* lista, int valor);

int leiDelPos(lista_enc_int* lista, int pos);

int leiGetPos(lista_enc_int* lista, int pos);

int leiGetTam(lista_enc_int* lista);

#endif // _LISTA_ENCADEADA_H_
