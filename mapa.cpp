#include "mapa.h"
#include<iostream>
#include <Windows.h>

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
				bool print = false;
				for (int k = 0; k < gus.puntos; k++) {
					if (gus.colax[k] == j && gus.colay[k] == i) {
						std::cout << "@";
						print = true;
					}
				}
				if (!print) {
					std::cout << " ";
				}
			}
		}
		std::cout << "#\n";
	}
	for (int i = 0; i < col + 2; i++) {
		std::cout << "#";
	}
}

void mapa::colision_muros(int& xjj, int& ancho, int& yjj, int& alto, int& vidass) {
	if (xjj >= ancho || xjj < 0 || yjj >= alto || yjj < 0) {
		xjj = (ancho) / 2;
		yjj = (alto) / 2;
		vidass--;
	}
}

void mapa::colision_frutita(int& xjj, int& mnzx, int& yjj, int& mnzy, int& uwuu, int& owoo, int& puntoss) {
	if (xjj == mnzx && yjj == mnzy) {
		mnzx = rand() % uwuu;
		mnzy = rand() % owoo;
		puntoss++;
	}

}


void mapa::comprueba(int& vidass, bool& juegoo) {
	if (vidass <= 0) { juegoo = false; }
}


