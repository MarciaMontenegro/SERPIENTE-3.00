#include <iostream>
#include <Windows.h>
#include "mapa.h"
#include <conio.h>


int main() {
	mapa mapaP(10, 10, jugador (5,5));
	while (true){
		mapaP.gus.demo();
		if (_kbhit()){
			switch (_getch()){
				case 'w':
					mapaP.gus.movy();
					break;
				case 'a':
					mapaP.gus.mov_x();
					break;
				case 's':
					mapaP.gus.mov_y();
					break;
				case 'd':
					mapaP.gus.movx();
					break;
				default:
					break;
			}
		}
		/*system("CLS");
		mapaP.imprimir();*/
		Sleep(10);
	}
		
	return 0;
}
