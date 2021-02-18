#include <iostream>
using namespace std;

/**
 * Hacer una función que dados dos números, devuelva la suma, la resta, la multiplicación y la división de dichos
 * números y un bool que diga si ha sido un éxito o no.
 *
 */
double * operaciones(double a, double b) {

    static double res[5];
    res[4] = 0;

    res[0] = a + b;
    res[1] = a - b;
    res[2] = a * b;
    try {
        if (b == 0) { throw b; }
        res[3] = a / b;
    } catch (double b) {
        res[3] = -99999;
        res[4] = -1;
    }

    return res;
}

int main() {
    double a = 2;
    double b = 0;
    double * ops;

    ops = operaciones(a, b);
    *(ops + 4) ? cout << "La operación fracasó." << endl : cout << "La operación fue exitosa." << endl;

    cout << "Suma: "           << *(ops + 0) << endl;
    cout << "Resta: "          << *(ops + 1) << endl;
    cout << "Multiplicación: " << *(ops + 2) << endl;
    cout << "División: "       << *(ops + 3) << endl;
}