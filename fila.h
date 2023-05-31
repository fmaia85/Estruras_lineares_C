#ifndef _FILA_H_
#define _FILA_H_

/**
 * \brief Representa uma fila de valores inteiros.
 *
 * Esta estrutura para organizar valores inteiros em 
 * formato de fila.
 * As operações de inserção de novos elementos (enqueue) deverá ocorer no
 * fim da fila (rear) e a extração dos elementos solicitados (dequeue) 
 * deverá ocorrer no início da fila (front).
 * Assim, a estrutura obedecerá a regra:
 * primeiro a entrar, primeiro a sair.
 */
struct node_queue_int{
    int valor;
    struct node_queue_int* prox;
};
typedef struct node_queue_int node_queue_int;

struct queue_int{
    int tam;
    node_queue_int* front;
    node_queue_int* rear;
};
typedef struct queue_int queue_int;

/**
 * \brief Inicializa uma nova fila.
 *
 * Inicializa uma nova fila, que terá 
 * front e rear nulos e tamanho 0.
 *
 * \return retorna um ponteiro para a fila.
 */
queue_int* qiStart();

/**
 * \brief Destroi completamente uma fila e seus elementos.
 *
 * Percorre toda a fila destruindo seus elementos.
 *
 * \param fila a fila que será destruida.
 */
void qiDestruct(queue_int* fila);

/**
 * \brief Adiciona um elemento no fim (rear) da fila.
 *
 * Modifica o fim (rear) da fila, inserino um novo elemento
 * que passará a ser o novo fim.
 *
 * \param fila a fila que será modificada.
 * \param valor o novo valor que será inserido.
 */
void qiEnqueue(queue_int* fila, int valor);

/**
 * \brief Extrai um elemento do início (front) da fila.
 *
 * Modifica o início da fila. Extrai o elemento que 
 * atualmente está no front. Esse elemento será 
 * destruido, e seu valor será retornado.
 *
 * \param fila a fila que será modificada.
 * 
 * \return retorna o valor que estava armanezenado no elemento.
 */
int qiDequeue(queue_int* fila);

/**
 * \brief Consulta o tamanho total da fila.
 *
 * Verifica o tamanho atual da fila. 
 * Sendo isso a quantidade de nós atualmente 
 * armazenados lá.
 *
 * \param fila a fila que será consultada.
 *  
 * \return retorna o tamanho da fila.
 */
int qiGetTam(queue_int* fila);

#endif // _FILA_H_
