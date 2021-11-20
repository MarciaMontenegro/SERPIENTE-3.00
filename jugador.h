#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include "objeto.h"

class jugador : public objeto {
public:
	int xj, yj, vidas, puntos, colax, colay;

	enum Direcciones { PARADA = 0, IZQ, DRCH, ARRIBA, ABAJO };
	Direcciones DireccionSerpiente;

	jugador();
	jugador(int xj, int yj, int colax, int colay);
	~jugador();

	void detectar();
	void mover();

	void puntuacion();
	void vidainfo();
	void mov_cola();
};

#endif
