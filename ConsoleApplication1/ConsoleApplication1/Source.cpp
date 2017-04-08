#include <windows.h>
#include <iostream>
#include "FIFO.h"

using namespace std;


void runFifo() {
	try {
		FIFO * fifo = new FIFO();
		fifo->push(1);
		fifo->push(2);
		fifo->push(3);
		cout << fifo->pull() << endl;
		cout << fifo->pull() << endl;
		cout << fifo->pull() << endl;
		cout << fifo->pull() << endl;
	}
	catch (const char* msg) {
		cout << msg << endl;
	}
}

int main(void) {
	runFifo();
	system("pause");

	return 0;
	//comment2
}