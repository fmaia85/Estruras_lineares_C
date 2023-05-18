#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lista_encadeada.h"

int main(int argc, char const *argv[])
{   
    /*Criação de uma nova lista:*/
    lista_enc_int* lista = leiStart(25);
    
    /*Adicionando novos valores ao final da lista:*/
    leiAddLast(lista, 25);
    leiAddLast(lista, 55);

    /*Adicionando novos valores em posições específicas:*/
    leiAddPos(lista, 0, 5);
    leiAddPos(lista, 2, 35);

    /*Removendo elementos de posições específicas:*/
    lista = leiDelPos(lista, 2);
    lista = leiDelPos(lista, 1);

    /*Consultando o tamanho atual da lista:*/
    int tam = leiGetTam(lista);
    printf("Tamanho da lista: %d.\n", tam);

    /*Obtendo elementos de posições específicas da lista:*/
    for(int i = 0; i < tam; i++){
        int v = leiGetPos(lista, i);
        printf("[%d] %d; ", i, v);
    }

    /*Destruindo complemente a lista:*/
    leiDestruct(lista);

    printf("\n\n\n");
    return 0;
}
