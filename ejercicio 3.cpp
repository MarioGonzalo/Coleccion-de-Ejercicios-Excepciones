#include <iostream>
#include <stdexcept>

void funcionTres() {
    std::cout << "Función Tres: Comenzando..." << std::endl;

    throw std::runtime_error("¡Esta es una excepción de ejemplo!");

}

void funcionDos() {
    std::cout << "Función Dos: Comenzando..." << std::endl;
    funcionTres();
    std::cout << "Función Dos: Esto no se imprimirá debido a la excepción en funciónTres." << std::endl;
}

void funcionUno() {
    std::cout << "Función Uno: Comenzando..." << std::endl;
    try {
        funcionDos();
    } catch (const std::exception& e) {
        std::cerr << "Excepción manejada: " << e.what() << std::endl;
    }
    std::cout << "Función Uno: Terminando..." << std::endl;
}

int main() {
    try {
        funcionUno();
    } catch (const std::exception& e) {
        std::cerr << "Excepción atrapada en la función principal: " << e.what() << std::endl;
    }

    return 0;
}
