#ifndef MAPA_H
#define MAPA_H
#include<iostream>
#include "jugador.h"
#include "frutita.h"

class mapa {
public:
	int x, y;
	jugador gus;
	frutita manzanita;
	mapa(int x, int y, jugador gus, frutita manzanita);

	~mapa();
	void imprimir();

	void colision_muros(int& xjj, int& ancho, int& yjj, int& alto, int& vidass, bool& juegoo);

	void colision_frutita(int& xjj, int& mnzx, int& yjj, int& mnzy, int& uwuu, int& owoo, int& puntoss);

};

#endif
