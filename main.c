#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lista_encadeada.h"

int main(int argc, char const *argv[])
{
    lista_enc_int* lista = leiStart(25);
    
    leiAddLast(lista, 44);
    leiAddLast(lista, 55);

    leiAddPos(lista, 0, 5);

    leiDelPos(lista, 2);
    int tam = leiGetTam(lista);
    printf("Tamanho da lista: %d.\n", tam);

   
    for(int i = 0; i < tam; i++){
        int v = leiGetPos(lista, i);
        printf("[%d] %d; ", i, v);
    }

    leiDestruct(lista);

    printf("\n\n\n");
    return 0;
}
