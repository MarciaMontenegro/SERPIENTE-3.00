#include "mapa.h"
#include<iostream>
mapa::mapa(int _x, int _y, jugador _gus, frutita _manzanita) {
	x = _x;
	y = _y;
	gus = _gus;
	manzanita = _manzanita;
}

mapa::~mapa() {

}

void mapa::imprimir() {
	int** matriz_dinamica;
	int fila, col;
	fila = y; col = x;
	matriz_dinamica = new int* [fila];
	for (int i = 0; i < fila; i++) {
		matriz_dinamica[i] = new int[col];
	}
	for (int i = 0; i < col + 2; i++) {
		std::cout << "#";
	}
	std::cout << std::endl;
	for (int i = 0; i < fila; i++) {
		std::cout << "#";
		for (int j = 0; j < col; j++) {
			if (i == gus.yj && j == gus.xj) {
				std::cout << "@";
			}
			else if (i == manzanita.yf && j == manzanita.xf) {
				std::cout << "*";
			}
			else {

				bool MuestraCola = false; //para mostrar la cola
				for (int k = 0; k < gus.puntos; k++)
				{
					if (gus.colax == j && gus.colay == i)
					{
						std::cout << "o";
						MuestraCola = true;
					}
				}
				if (!MuestraCola)
				{
					std::cout << " "; //espacio en blanco
				}

				//std::cout << " ";
			}
		}
		std::cout << "#\n";
	}
	for (int i = 0; i < col + 2; i++) {
		std::cout << "#";
	}
}

void mapa::colision_muros(int& xjj, int& ancho, int& yjj, int& alto, int& vidass, bool& juegoo) {
	if (xjj >= ancho || xjj < 0 || yjj >= alto || yjj < 0) {
		xjj = (ancho) / 2;
		yjj = (alto) / 2;
		vidass--;
		if (vidass <= 0) { juegoo = false; }
	}
}

void mapa::colision_frutita(int& xjj, int& mnzx, int& yjj, int& mnzy, int& uwuu, int& owoo, int& puntoss) {
	if (xjj == mnzx && yjj == mnzy) {
		mnzx = rand() % uwuu;
		mnzy = rand() % owoo;
		puntoss++;
	}

}
