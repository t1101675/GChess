#include <memory.h>

#include "Status.h"
#include "Point.h"

Status::Status(const int M, const int N, const int *top, int **board, const int lastX, const int lastY, const int noX, const int noY) {
	this->_M = M;
	this->_N = N;
	this->_top = new int[N];
	memcpy(this->_top, top, N * sizeof(int));
	this->_board = new int*[M];
	for (int i = 0; i < M; ++i) {
		this->_board[i] = new int[N];
		memcpy(this->_board, board, N * sizeof(int));
	}
	this->_noX = noX;
	this->_noY = noY;
	this->_lastX = lastX;
	this->_lastY = lastY;
}

Status::~Status() {
	delete[] this->_top;
	for (int i = 0; i < this->_M; ++i) {
		delete[] this->_board[i];
	}
	delete[] this->_board;
}

Point Status::getNextStep()
{
	return Point(0, 0);
}
