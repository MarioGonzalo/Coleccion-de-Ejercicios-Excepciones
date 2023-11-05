#include <iostream>
#include <stdexcept>

void lanzaExcepcion() {
    throw std::runtime_error("Excepcion lanzada");
}

int main () {
    try {
        lanzaExcepcion();
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepcion capturada y manejada. Reactivando..." << std::endl;
        throw;
    }
    catch (const std::exception& e) {
        std::cout << "Excepcion reactivada capturada: " << e.what() << std::endl;
    }

    return 0;
}