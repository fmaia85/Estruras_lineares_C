#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lista_encadeada.h"

int main(int argc, char const *argv[])
{
    lista_enc_int* lista = leiStart(25);
    
    leiAddLast(lista, 35);
    leiAddLast(lista, 55);

    leiAddPos(0, 0, 0);

    leiDelPos(0, 0);
    leiGetPos(0, 0);
    leiGetTam(0);

    leiDestruct(lista);

    printf("\n\n\n");
    return 0;
}
