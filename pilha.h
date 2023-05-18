#ifndef _PILHA_H_
#define _PILHA_H_

/**
 * \brief Representa uma pilha de valores inteiros.
 *
 * Esta estrutura para organizar valores inteiros em 
 * formato de pilha.
 * As operações de inserção de novos elementos (PUSH) e
 * extração de elementos (POP) deverão ser realizadas
 * sempre no topo da pilha.
 * Assim, a estrutura obedecerá a regra:
 * primeiro a entrar, último a sair.
 */
struct node_stack_int{
    int valor;
    struct node_stack_int* prox;
};
struct stack_int{
    int tam;
    struct node_stack_int* head;
};
typedef struct stack_int stack_int;

/**
 * \brief Inicializa uma nova pilha.
 *
 * Inicializa uma nova pilha, que terá 
 * cabeça nula e tamanho 0.
 *
 * \return retorna um ponteiro para a pilha.
 */
stack_int* siStart();

/**
 * \brief Destroi completamente uma pilha e seus elementos.
 *
 * Percorre toda a pilha destruindo seus elementos.
 *
 * \param pilha a pilha que será destruida.
 */
void siDestruct(stack_int* pilha);

/**
 * \brief Adiciona um elemento no top da pilha.
 *
 * Modifica a cabeça da pilha, inserino um novo elemento
 * que passará a ser o topo.
 *
 * \param pilha a pilha que será modificada.
 * \param valor o novo valor que será inserido.
 */
void siPush(stack_int* pilha, int valor);

/**
 * \brief Extrai um elemento do topo da pilha.
 *
 * Modifica a cabeça da pilha. Extrai o elemento que 
 * atualmente está na cabeça. Esse elemento será 
 * destruido, e seu valor será retornado.
 *
 * \param pilha a pilha que será modificada.
 * 
 * \return returna o valor que estava armanezenado no elemento.
 */
int siPop(stack_int* pilha);

/**
 * \brief Consulta o tamanho total da pilha.
 *
 * Verifica o tamanho atual da pilha. 
 * Sendo isso a quantidade de nós atualmente 
 * armazenados lá.
 *
 * \param pilha a pilha que será consultada.
 *  
 * \return retorna o tamanho da pilha.
 */
int siGetTam(stack_int* pilha);

#endif // _PILHA_H_
