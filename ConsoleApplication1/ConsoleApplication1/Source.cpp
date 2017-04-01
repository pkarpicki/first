#include <windows.h>
#include <iostream>
#include "FIFO.h"

using namespace std;

int main(void) {

	FIFO * fifo = new FIFO();
	fifo->push(1);
	fifo->push(2);
	fifo->push(3);
	cout << fifo->pull();
	cout << fifo->pull();
	cout << fifo->pull();
	system("pause");
	return 0;
}