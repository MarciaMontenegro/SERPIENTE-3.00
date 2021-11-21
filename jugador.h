#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include "objeto.h"

class jugador : public objeto {
public:
	int xj, yj, vidas, puntos;
	int colax[100], colay[100];

	enum Direcciones { PARADA = 0, IZQ, DRCH, ARRIBA, ABAJO };
	Direcciones DireccionSerpiente;
	enum Direcciones2 { PARADA2 = 0, IZQ2, DRCH2, ARRIBA2, ABAJO2, SALIR };
	Direcciones2 direccionserpiente2;

	jugador();
	jugador(int xj, int yj);
	~jugador();
	void detectar();
	void mover();
	void puntuacion();
	void vidainfo();
	void mov_cola();
	void colision_cola();




};

#endif
