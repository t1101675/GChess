#ifndef _STATUS_H
#define _STATUS_H

#include "Point.h"

class Status {
private:
	int _M, _N;
	int **_board;
	int _noX,  _noY;
	int *_top;
	int _lastX, _lastY;

public:
	Status(const int M, const int N, const int* top, int** board, const int lastX, const int lastY, const int noX, const int noY);
	Point getNextStep();
	~Status();
};
#endif // !_STATUS_H
