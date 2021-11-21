#include "jugador.h"
#include <conio.h>
jugador::jugador() {
    xj = 0;
    yj = 0;
}

jugador::jugador(int _x, int _y) {
    xj = _x;
    yj = _y;
    vidas = 3;
    puntos = 0;
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

    int prevx = colax[0];
    int prevy = colay[0];
    int prev2x, prev2y;
    colax[0] = xj;
    colay[0] = yj;
    for (int i = 1; i < puntos; i++) {
        prev2x = colax[i];
        prev2y = colay[i];
        colax[i] = prevx;
        colay[i] = prevy;
        prevx = prev2x;
        prevy = prev2y;
    }

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
    int XantiguaCola = colax[0];
    int YantiguaCola = colay[0];
    int XantiguaCola2, YantiguaCola2;
    /*colax = xj;
    colay = yj;*/

    //intercambio de pos
    for (int i = 1; i < puntos; i++)//itera las veces el tamaño de la cola
    {
        XantiguaCola2 = colax[i];
        YantiguaCola2 = colay[i];

        colax[i] = XantiguaCola;
        colay[i] = YantiguaCola;

        XantiguaCola = XantiguaCola2;
        YantiguaCola = YantiguaCola2;
    }
}

void jugador::colision_cola() {
    for (int i = 0; i < puntos; i++)
    {
        if (colax[i] == xj && colay[i] == yj)
        {
            vidas--;
           
        }
    }
}

