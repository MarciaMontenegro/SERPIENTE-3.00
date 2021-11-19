#include "jugador.h"

jugador::jugador(){
	xj=0;
	yj=0;
}

jugador::jugador(int _x, int _y){
	xj=_x;
	yj=_y;
}

jugador::~jugador(){
}

void jugador::movx(){
	xj++;
}

void jugador::mov_x(){
	xj--;
}

void jugador::movy(){
	yj++;
}

void jugador::mov_y(){
	yj--;
}

void jugador::demo(){
	std::cout<<"Coordenadas: "<<xj<<", "<<yj<<std::endl;
}
