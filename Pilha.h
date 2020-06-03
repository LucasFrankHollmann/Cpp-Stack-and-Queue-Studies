//Autor: Lucas Frank Hollmann

#include <stdio.h> //Biblioteca para usar printf.
#include <stdlib.h> //Biblioteca para usar malloc.

struct sNode //Estrutura de nó de pilha.
{
	struct sNode *down; //Ponteiro para o nó abaixo.
	int valor; //Valor armazenado no elemento da pilha.
	
};typedef struct sNode sNode;

class Stack
{
	private:
		
		sNode *top; //Elemento da parte de cima da pilha (primeiro elemento).
		int size;
	
	public:
	
		/* Construtor da classe Stack, define valores iniciais para top e size.
		 */		 
		Stack()
		{
			top = NULL;
			size = 0;
		}
		
		/* Exibe e retorna o tamanho da pilha.
		 * 
		 * print - flag que indica se o resultado da consulta deve ser exibido na tela ou não.
		 * retorno - o tamanho da pilha.
		 */
		int getSize(bool print)
		{
			if(print)
			{
				printf("Tamanho da pilha: %d\n", size);
			}
			return size;
		}
		
		/* Mostra se a pilha está vazia ou não.
		 * 
		 * print - flag que indica se o resultado da consulta deve ser exibido na tela ou não.
		 * retorno - true se a pilha estiver vazia, false caso contrário.
		 */
		bool isEmpty(bool print)
		{
			bool vazio = (top == NULL);
			
			if(print)
			{
				if(vazio)
				{
					printf("A pilha está vazia.\n");
				}
				else
				{
					printf("A pilha não está vazia.\n");
				}
			}
			return vazio;
		}
		
		/* Exibe o conteúdo da pilha no terminal.
		 */
		void printStack()
		{
			if(isEmpty(false))//Se a pilha estiver vazia, exibe isso e retorna, encerrando a função.
			{
				printf("Pilha vazia\n");
			}
			
			sNode *aux = top; //Nó auxiliar para percorrer a pilha.
			
			while(aux != NULL)
			{
				printf("	%d\n", aux->valor);//Exibe o valor do nó atual.
				
				if(aux->down == NULL)//Se houverem nós abaixo do atual, exibe uma seta para baixo.
				{
					printf("	|\n	V\n");
				}
				aux = aux->down;
			}
			
			
		}
};

























