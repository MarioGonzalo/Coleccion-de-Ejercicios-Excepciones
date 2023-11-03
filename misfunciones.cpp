
#include "misfunciones.h"

bool esNegativo(int numero) {
    if (numero < 0) {
        errorFlag = true;
    }
    return false;
}