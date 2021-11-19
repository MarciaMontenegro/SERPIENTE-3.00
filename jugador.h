#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include "objeto.h"

class jugador : public objeto{
	public:
		int xj;
		int yj;
		jugador();
		jugador(int xj, int yj);
		~jugador();
		void movx();
		void mov_x();
		void movy();
		void mov_y();
		void demo();
};

#endif
