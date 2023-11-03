
#include <iostream>

bool errorFlag = false;
bool esNegativo(int numero) {
    if (numero < 0) {
        errorFlag = true;
        return true;
    }
    return false;
}
int main() {
    int numero = -5;
    if (esNegativo(numero)){
        std::cerr << "Ocurrio un error: el numero es negativo." <<std::endl;
        errorFlag = false;
    }
    if (!errorFlag) {
        std::cout << "Numero valido: " << numero << std::endl;
    }
    return 0;
}
