
#include <iostream>
#include "misfunciones.h"

bool errorFlag = false;

int main() {
    int numero = -5;

    if (esNegativo(numero)) {
        std::cerr << "ocurrio un error: el numero es negativo." <<std::endl;
        errorFlag = false;
    }

    if (!errorFlag) {
        std::cout << "Numero valido: " << numero << std::endl;
    }
    return 0;
}