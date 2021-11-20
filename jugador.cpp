#include "jugador.h"
#include <conio.h>
jugador::jugador() {
    xj = 0;
    yj = 0;
    colax = 0;
    colay = 0;
}

jugador::jugador(int _x, int _y, int _colax, int _colay) {
    xj = _x;
    yj = _y;
    vidas = 3;
    puntos = 0;
    colax = _colax;
    colay = _colay;
}

jugador::~jugador() {
}

void jugador::detectar() {

    if (_kbhit())//dectecta tecla apretada
    {
        switch (_getch())//para reconocer la tecla pulsada
        {
        case 'a': //IZQUIERDA
            DireccionSerpiente = IZQ;
            break;
        case 'd': //DERECHA
            DireccionSerpiente = DRCH;
            break;
        case 'w': //ARRIBA
            DireccionSerpiente = ARRIBA;
            break;
        case 's': //ABAJO
            DireccionSerpiente = ABAJO;
            break;
        }
    }
}

void jugador::mover() {
    switch (DireccionSerpiente) {
    case PARADA:
        break;
    case IZQ:
        xj -= 1; //MUEVE EL X DE LA SERPIENTE -1 A LA IZQUIERDA
        break;
    case DRCH:
        xj += 1; //MUEVE EL X DE LA SERPIENTE +1 A LA DERECHA
        break;
    case ARRIBA:
        yj -= 1; //MUEVE EL Y DE LA SERPIENTE -1 PARA ARRIBA
        break;
    case ABAJO:
        yj += 1; //MUEVE EL Y DE LA SERPIENTE +1 PARA ABAJO
        break;

    }
}

void jugador::puntuacion() {
    std::cout << "\nPuntuacion: " << puntos << std::endl;
}

void jugador::vidainfo() {
    std::cout << "\nVidas: " << vidas << std::endl;
}

void jugador::mov_cola() {
    int XantiguaCola = colax;
    int YantiguaCola = colay;
    int XantiguaCola2, YantiguaCola2;
    colax = xj;
    colay = yj;

    //intercambio de pos
    for (int i = 1; i < puntos; i++)//itera las veces el tamaño de la cola
    {
        XantiguaCola2 = colax;
        YantiguaCola2 = colay;

        colax = XantiguaCola;
        colay = YantiguaCola;

        XantiguaCola = XantiguaCola2;
        YantiguaCola = YantiguaCola2;
    }


}


