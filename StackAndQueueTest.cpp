//Autor: Lucas Frank Hollmann

#include "Fila.h"
#include "Deque.h"
#include "Pilha.h"

#include <stdio.h> //Biblioteca para usar printf.

int main()
{
	
	Queue Q;
	Deque DQ;
	
	printf("Queue:\n");
	Q.isEmpty();
	Q.push(1);
	Q.push(2);
	Q.push(3);
	Q.push(4);
	Q.push(5);
	Q.push(6);
	Q.push(7);
	Q.printQueue();
	Q.getSize();
	Q.isEmpty();
	
	printf("pop %d\n", *Q.pop());Q.getSize();
	printf("pop %d\n", *Q.pop());Q.getSize();
	printf("pop %d\n", *Q.pop());Q.getSize();
	printf("pop %d\n", *Q.pop());Q.getSize();
	printf("pop %d\n", *Q.pop());Q.getSize();
	printf("pop %d\n", *Q.pop());Q.getSize();
	printf("pop %d\n", *Q.pop());Q.getSize();
	int *d = Q.pop();
	if(d !=NULL)
	{
		printf("pop %d\n", *d);Q.getSize();
	}
	
	printf("Deque:\n");
	DQ.isEmpty();
	DQ.pushRight(1);
	DQ.pushLeft(2);
	DQ.pushRight(3);
	DQ.pushLeft(4);
	DQ.pushRight(5);
	DQ.pushLeft(6);
	DQ.pushRight(7);
	DQ.printQueue();
	DQ.getSize();
	DQ.isEmpty();
	
	printf("popL %d\n", *DQ.popLeft());DQ.printQueue();DQ.getSize();
	printf("popR %d\n", *DQ.popRight());DQ.printQueue();DQ.getSize();
	printf("popL %d\n", *DQ.popLeft());DQ.printQueue();DQ.getSize();
	printf("popR %d\n", *DQ.popRight());DQ.printQueue();DQ.getSize();
	printf("popL %d\n", *DQ.popLeft());DQ.printQueue();DQ.getSize();
	printf("popR %d\n", *DQ.popRight());DQ.printQueue();DQ.getSize();
	printf("popL %d\n", *DQ.popLeft());DQ.printQueue();DQ.getSize();
	
	d = DQ.popRight();
	if(d !=NULL)
	{
		printf("popR %d\n", *d);DQ.printQueue();DQ.getSize();
	}
	
	printf("Pilha:\n");
	Stack S;
	
	S.getSize(true);
	S.isEmpty(true);
	S.push(1);
	S.push(2);
	S.push(3);
	S.push(4);
	S.push(5);
	S.push(6);
	S.getSize(true);
	S.isEmpty(true);
	S.printStack();
	int *v = S.pop();
	if(v != NULL)
	{
		printf("pop %d\n", *v);
	}
	S.printStack();
	
	v = S.pop();
	if(v != NULL)
	{
		printf("pop %d\n", *v);
	}
	S.printStack();
	
	v = S.pop();
	if(v != NULL)
	{
		printf("pop %d\n", *v);
	}
	S.printStack();
	
	v = S.pop();
	if(v != NULL)
	{
		printf("pop %d\n", *v);
	}
	S.printStack();
	
	S.push(4);
	
	v = S.pop();
	if(v != NULL)
	{
		printf("pop %d\n", *v);
	}
	S.printStack();
	
	v = S.pop();
	if(v != NULL)
	{
		printf("pop %d\n", *v);
	}
	S.printStack();
	
	v = S.pop();
	if(v != NULL)
	{
		printf("pop %d\n", *v);
	}
	S.printStack();
	
	v = S.pop();
	if(v != NULL)
	{
		printf("pop %d\n", *v);
	}
	
	
	
	
	return 0;
}






