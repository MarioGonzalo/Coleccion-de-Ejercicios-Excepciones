
#include <iostream>
#include <stdexcept>

int dividirConError(int a, int b) {
    if (b == 0) {
        return -1;
    }
    else {
        return a / b;
    }
}

int dividirConExcepcion(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("division por cero");
    }
    else {
        return a / b;
    }
}
int main() {
    int numerador = 10;
    int denominador = 0;

    int resultadoError = dividirConError(numerador, denominador);
    if (resultadoError == -1) {
        std::cout << "Error: Division por cero." << std::endl;
    } else {
        std::cout << "Resultado (sin error): " << resultadoError << std::endl;
    }

    try {
        int resultadoExcepcion = dividirConExcepcion(numerador, denominador);
        std::cout << "Resultado (sin error): " << resultadoExcepcion << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Excepcion: " << e.what() << std::endl;
    }
    return 0;
}