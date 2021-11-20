#include <iostream>
#include <Windows.h>
#include "mapa.h"
#include <conio.h>
//#include "MyLib.h"

bool juego = true;

int main() {
	srand(time(0));
	int uwu, owo;
	std::cout << "Dimension en x de su tablero: ";std::cin >> uwu;
	std::cout << "Dimension en y de su tablero: ";std::cin >> owo;
	std::cout << "\n";
	mapa mapaP(uwu, owo, jugador(5, 5,0,0), frutita(3, 3));
	while (juego) {
		//std::cout << "\033[H\033[2J\033[3J";
		system("CLS");
		mapaP.colision_muros(mapaP.gus.xj, mapaP.x, mapaP.gus.yj, mapaP.y, mapaP.gus.vidas, juego);
		mapaP.colision_frutita(mapaP.gus.xj, mapaP.manzanita.xf, mapaP.gus.yj, mapaP.manzanita.yf, uwu, owo, mapaP.gus.puntos);
		mapaP.gus.detectar();
		mapaP.gus.mover();
		mapaP.imprimir();
		mapaP.gus.puntuacion();
		mapaP.gus.vidainfo();
		mapaP.gus.mov_cola();
		Sleep(100);
	}

	return 0;
}
