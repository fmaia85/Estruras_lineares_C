#ifndef _LISTA_ENCADEADA_H_
#define _LISTA_ENCADEADA_H_

/**
 * \brief Representa uma lista encadeada de valores inteiros.
 *
 * Esta estrutura representa listas encadeadas do tipo inteiro.
 * Essa mesma estrutura pode ser entendida como os nós da lista
 * ou a própria lista. 
 * Aplicando os conceitos de recursividade, cada nó da lista
 * pode ser entendido como o início de uma nova lista.
 * Assim, é possível chamar essa estrutura de 
 * struct node_enc_int ou também de lista_enc_int.
 * Cada nó da lista contem apenas um inteiro que 
 * armazena o valor do nó atual e também um ponteiro para
 * o próximo nó da lista.
 * A lista não armazena nenhuma informação sobre a quantidade
 * de elementos que contém. Porém, nas implementações de suas
 * funções de manipulação é possível determinar um valor nulo (0)
 * para indicar quando não há um próximo nó. Isso permite
 * perceber quando podemos chegar ao último nó da lista. 
 */
struct node_enc_int{
    int valor;
    struct node_enc_int* prox;
};
typedef struct node_enc_int lista_enc_int;


/**
 * \brief Inicializa uma nova lista.
 *
 * Inicializa uma nova lista encadeada simples que armazena
 * valores do tipo int.
 * O primeiro elemento da lista receberá o valor informado
 * no parâmetro da função.
 *
 * \param cabeca Um valor inteiro que será atribuido ao
 * primeiro elemento da lista.
 *
 * \return retorna um ponteiro para a lista.
 */
lista_enc_int* leiStart(int cabeca);


/**
 * \brief Destroi completamente uma lista e seus elementos.
 *
 * Percorre todos os elementos da lista, liberando toda
 * memória ocupada por eles.
 *
 * \param lista a lista que será destruida.
 */
void leiDestruct(lista_enc_int* lista);


/**
 * \brief Adiciona um elemento no fim da lista.
 *
 * Percorre toda a lista e, ao chegar em seu final,
 * adiciona um novo elemento na última posição.
 *
 * \param lista a lista que será modificada.
 * \param valor o novo valor que será inserido.
 */
void leiAddLast(lista_enc_int* lista, int valor);


/**
 * \brief Adiciona um elemento em uma posição da lista.
 *
 * Percorre toda a lista e, ao chegar na posição determinda,
 * adiciona um novo elemento nesta posição.
 *
 * \param lista a lista que será modificada.
 * \param pos posição específica onde será inserido.
 * \param valor o novo valor que será inserido.
 */
void leiAddPos(lista_enc_int* lista, int pos, int valor);


/**
 * \brief Deleta um elemento em uma posição da lista.
 *
 * Percorre toda a lista e, ao chegar na posição determinada,
 * deleta o elemento nesta posição.
 * Esta função reduz o tamanho total da lista e por
 * consequência altera o índice de todos os elementos
 * que estão em posições após a remoção.
 * Esta função também já é responsável por liberar
 * a memória ocupada pelo nó que está sendo removido.
 *
 * \param lista a lista que será modificada.
 * \param pos posição específica onde será removido.
 * 
 * \return retorna um ponteiro para a nova lista, agora com 
 *          o elemento removido.
 */
lista_enc_int* leiDelPos(lista_enc_int* lista, int pos);


/**
 * \brief Consulta um elemento em uma posição da lista.
 *
 * Percorre toda a lista e, ao chegar na posição determinada,
 * consulta o valor do elemento nesta posição.
 *
 * \param lista a lista que será consultada.
 * \param pos posição específica onde será consultado.
 * 
 * \return retorna o valor presente no elemento consultado.
 */
int leiGetPos(lista_enc_int* lista, int pos);

/**
 * \brief Consulta o tamanho total da lista.
 *
 * Percorre toda a lista contando seus elementos.
 * Ao chegar no último elemento, retorna a quantidade
 * total de elementos encontrados.
 *
 * \param lista a lista que será consultada.
 *  
 * \return retorna o tamanho da lista.
 */
int leiGetTam(lista_enc_int* lista);

#endif // _LISTA_ENCADEADA_H_
