//Autor: Lucas Frank Hollmann

#include <stdio.h> //Biblioteca para usar printf.
#include <stdlib.h> //Biblioteca para usar malloc.

struct qNode //Estrutura de nó para a fila.
{
	struct qNode *prox, *prev; //Ponteiros para o próximo elemento e o elemento anterior.
	int valor; //Valor armazenado no elemento.
};
typedef struct qNode qNode;

class Queue
{
	private:
		
		qNode *head, *tail; //Nó inicial e nó final da fila.
		int size; //Tamanho da fila.
		
	public:
		
		/* Construtor da classe Queue, define valores iniciais do objeto.
		 */ 
		Queue()
		{
			head = NULL;
			tail = NULL;
			size = 0;
		}
		
		/* Exibe o tamanho da fila e retorna esse valor.
		 * 
		 * retorno - o tamanho da fila.
		 */
		int getSize()
		{
			printf("Tamanho da fila: %d\n", size);
			return size;
		}
		
		/* Informa se a lista está vazia ou não.
		 * 
		 * retorno - true se a lista estiver vazia, false caso contrário.
		 */
		bool isEmpty()
		{
			if(head == NULL)
			{
				printf("Fila vazia\n");
				return true;
			}
			else
			{
				printf("Fila nao vazia\n");
				return false;
			}
		}
		
		/* Exibe o conteúdo da fila.
		 */
		void printQueue()
		{
			if(head == NULL)//Se a fila estiver vazia, informa isso e finaliza a função.
			{
				printf("Fila vazia\n");
				return;
			}
			
			qNode *aux = head; //Nó auxiliar para percorrer a fila.
			
			while(aux != NULL)//Percorre a fila enquanto houver elementos não nulos.
			{
				printf("%d", aux->valor); //Exibe o valor do elemento atual.
				if(aux->prox != NULL) //Se ainda existir elementos após o atual, exibe uma divisão entre os elementos.
				{
					printf(" -> ");
				}
				aux = aux->prox; //Vai para o próximo elemento.
			}
			printf("\n");//Pula uma linha para manter a organização.
		}
		
		/* Insere um elemento no começo da fila.
		 * 
		 * v - valor inserido no novo elemento.
		 */
		void push(int v)
		{
			qNode *novo = (qNode*)malloc(sizeof(qNode)); //Aloca espaço para um novo nó na memória.
			novo->valor = v; //Define valores iniciais para o novo nó.
			novo->prox = NULL; 
			novo->prev = NULL;
			
			if(head == NULL)//Se a lista estiver vazia, o novo nó será a head e a tail.
			{
				head = novo;
				tail = novo;
			}
			else
			{
				novo->prox = head; //Posiciona a head e o restante da lista em frente ao novo nó.
				head->prev = novo; //Posiciona o novo nó atrás da head antiga.
				head = novo; //O novo nó se torna a nova head.
			}
			size++; //Incrementa o tamanho da fila.
		}
		
		/* Remove o elemento no final da fila.
		 * 
		 * retorno - o endereço do valor de tail.
		 */
		int *pop()
		{
			if(head == NULL)//Se a lista estiver vazia, informa isso e retorna NULL, encerrando a função.
			{
				printf("Fila vazia\n");
				return NULL;
			}
			else if(head->prox == NULL)//Se a lista contém só um elemento, redefine head e tail com os valores iniciais.
			{
				qNode *aux = tail; //Nó auxiliar para armazenar o valor de tail.
				tail = NULL; //Reinicia o valor de tail.
				head = NULL; //Reinicia o valor de head.
				size--;
				return &(aux->valor); //Retorna o endereço do valor de tail.
			}
			else //Se a lista contém dois elementos ou mais, remove tail porém e o atualiza.
			{
				qNode *aux = tail; //Nó auxiliar para armazenar o valor de tail.
				tail = tail->prev; //Tail vira o valor anterior a ele.
				tail->prox = NULL;
				if(tail->prev != NULL)//Se o nó anterior ao novo tail não for nulo, atualiza-o.
				{
					qNode *aux2 = tail->prev; //Nó auxiliar para armazenar o valor anterior ao novo tail.
					aux2->prox = tail;
				}
				size--;
				return &(aux->valor);
			}
		}
		
};







