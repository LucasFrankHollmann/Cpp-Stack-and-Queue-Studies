//Autor: Lucas Frank Hollmann

#include "Fila.h"

#include <stdio.h> //Biblioteca para usar printf.

int main()
{
	
	Queue Q;
	
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
	
	
	return 0;
}
