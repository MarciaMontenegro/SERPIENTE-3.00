#include <iostream>
#include <Windows.h>
#include "mapa.h"
#include <conio.h>

bool juego = true;

int main() {
	srand(time(0));
	int uwu, owo;

	std::cout << "Dimension en x de su tablero: "; std::cin >> uwu;
	std::cout << "Dimension en y de su tablero: "; std::cin >> owo;
	std::cout << "\n";
	mapa mapaP(uwu, owo, jugador(5, 5), frutita(3, 3));
	while (juego) {
		system("CLS");

		mapaP.gus.detectar();
		mapaP.gus.mover();
		mapaP.colision_muros(mapaP.gus.xj, mapaP.x, mapaP.gus.yj, mapaP.y, mapaP.gus.vidas);
		mapaP.colision_frutita(mapaP.gus.xj, mapaP.manzanita.xf, mapaP.gus.yj, mapaP.manzanita.yf, uwu, owo, mapaP.gus.puntos);
		mapaP.gus.colision_cola();
		mapaP.imprimir();
		mapaP.gus.puntuacion();
		mapaP.gus.vidainfo();
		mapaP.comprueba(mapaP.gus.vidas, juego);


		Sleep(100);
	}

	return 0;
}
