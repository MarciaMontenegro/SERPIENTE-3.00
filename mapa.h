#ifndef MAPA_H
#define MAPA_H
#include<iostream>
#include "jugador.h"

class mapa{
	public:
		int x, y;
		jugador gus;
		mapa(int x, int y, jugador gus);
		
		~mapa();
		void imprimir();
};

#endif
