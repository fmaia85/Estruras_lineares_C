#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lista_encadeada.h"
#include"pilha.h"
#include"fila.h"

void leiTest(){
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
    printf("\n");

    /*Destruindo complemente a lista:*/
    leiDestruct(lista);
    printf("Fim do leiTest\n");
}

void siTest(){
    stack_int* pilha = siStart();

    siPush(pilha, 51);
    siPush(pilha, 22);
    siPush(pilha, 44);
    siPush(pilha, 13);

    printf("POP: %d\n", siPop(pilha));
    printf("POP: %d\n", siPop(pilha));
    printf("POP: %d\n", siPop(pilha));

    siDestruct(pilha);

    printf("Fim do siTest\n");

}

void qiTest(){
    queue_int* fila = qiStart();
    qiEnqueue(fila, 10);
    qiEnqueue(fila, 25);
    qiEnqueue(fila, 33);
    qiEnqueue(fila, 47);

    printf("Dequeue:  %d\n", qiDequeue(fila));
    printf("Dequeue:  %d\n", qiDequeue(fila));
    printf("Dequeue:  %d\n", qiDequeue(fila));

    qiDestruct(fila);

    printf("Fim do qiTest\n");
}


int main(int argc, char const *argv[])
{   
    //leiTest();
    //siTest();
    qiTest();

    printf("\n\n\n");
    return 0;
}
