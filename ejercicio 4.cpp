#include <iostream>
#include <exception>
#include <string>


class MiExcepcion : public std::exception {
public:
    MiExcepcion(const std::string& mensaje) : mensaje_(mensaje) {}

    const char* what() const noexcept override {
        return mensaje_.c_str();
    }

private:
    std::string mensaje_;
};


class OtraExcepcion : public std::exception {
public:
    OtraExcepcion() : mensaje_("Otro tipo de excepción") {}

    const char* what() const noexcept override {
        return mensaje_.c_str();
    }

private:
    std::string mensaje_;
};

void funcionQuePuedeLanzarMiExcepcion(bool lanzar) {
    if (lanzar) {
        throw MiExcepcion("Se lanzó una excepción de tipo MiExcepcion.");
    }
}

void funcionQuePuedeLanzarOtraExcepcion(bool lanzar) {
    if (lanzar) {
        throw OtraExcepcion();
    }
}

int main() {
    try {
        funcionQuePuedeLanzarMiExcepcion(true);
    } catch (const MiExcepcion& e) {
        std::cerr << "Excepción MiExcepcion atrapada: " << e.what() << std::endl;
    }

    try {
        funcionQuePuedeLanzarOtraExcepcion(true);
    } catch (const OtraExcepcion& e) {
        std::cerr << "Excepción OtraExcepcion atrapada: " << e.what() << std::endl;
    }

    return 0;
}

