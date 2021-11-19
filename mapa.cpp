#include "mapa.h"

mapa::mapa(int _x, int _y, jugador _c){
	x=_x;
	y=_y;
	c=_c;
}

mapa::~mapa()
{
}

void mapa::imprimir(){
	/*for(int j=0;j<x+2;j++){
		std::cout<<"#";
	}
	std::cout<<"\n";
	for(int i=0;i<y;i++){
		std::cout<<"#";
		for(int j=0;j<x;j++){
			if(i==b && j==a){
				std::cout<<"@";
			}
			else{
				std::cout<<" ";
			}
		}
		std::cout<<"#\n";
	}
	for(int j=0;j<x+2;j++){
		std::cout<<"#";
	}*/
}

