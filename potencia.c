#include "potencia.h"

int potencia(int base, int pot) {
    int resultado = 1;
    for (int i = 0; i < pot; i++)
        resultado = resultado*base;
    return resultado;
}
