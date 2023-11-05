#include <iostream>
#include <stdexcept>
#include <fstream>
void escrituraArchivo(std::ofstream& file){
    if (!file.is_open()) {
        throw std::runtime_error("No se puede escribir en un archivo cerrado");
    }
    file << "Intento de escritura";
}
int main() {
    std::ofstream file;



    try {
        file.open("archivo.txt");

        escrituraArchivo(file);

        file.close();

        escrituraArchivo(file);

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    if (file.is_open()) {
        file.close();
    }

    return 0;
}
