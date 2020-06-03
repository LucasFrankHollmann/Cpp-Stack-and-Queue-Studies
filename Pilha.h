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
					printf("A pilha esta vazia.\n");
				}
				else
				{
					printf("A pilha nao esta vazia.\n");
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
				
				if(aux->down != NULL)//Se houverem nós abaixo do atual, exibe uma linha.
				{
					printf("	--\n");
				}
				aux = aux->down;
			}
			
			
		}

		/* Adiciona um elemento ao topo da pilha.
		 * 
		 * v - valor inserido.
		 */
		void push(int v)
		{
			sNode *novo = (sNode*)malloc(sizeof(sNode));
			novo->down = NULL;
			novo->valor = v;
			
			
			if(isEmpty(false))//Se a pilha estiver vazia, insere o novo nó no top.
			{
				top = novo;//top se torna o novo nó.
				size++;//Incrementa o tamanho da pilha.
			}
			else //Se a pilha não estiver vazia, atualiza top e insere o novo valor em cima.
			{
				novo->down = top; //O elemento abaixo do novo se torna o top.
				top = novo; //O novo nó se torna o top.
				size++;
			}
			
			
		}

		/* Remove o elemento no topo da pilha.
		 * 
		 * retorno - o valor do elemento removido.
		 */
		int *pop()
		{
			if(isEmpty(false))//Se a pilha estiver vazia, exibe isso e finaliza a função.
			{
				printf("Pilha vazia\n");
				return NULL;
			}
			else
			{
				int *v = &(top->valor);//Valor do elemento do topo a ser retornado.
				
				top = top->down;//Top se torna o elemento abaixo.
				
				size--;//Decrementa o tamanho da pilha.
				
				return v;
			}
			return NULL;
		}
};

























