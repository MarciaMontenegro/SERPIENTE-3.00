#ifndef FRUTITA_H
#define FRUTITA_H

#include "objeto.h"
#include <stdlib.h>
#include <time.h>

class frutita : public objeto {
public:
	int xf, yf;
	frutita();
	frutita(int xf, int yf);
	~frutita();
};

#endif
