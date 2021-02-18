#include <iostream>
using namespace std;

/**
 * Hacer una función que sume los dígitos de un número.          12345 ->  15
 * Si el número es menor que 0, que devuelva un valor negativo. -12345 -> -15
 */
int sumaDigitos(double n) {

    double dec;
    int ent, frac = 0;
    int sig = 1;

    if (n < 0) {
        sig = -1;
        n *= sig;
    }

    do {
        dec = n / 10;
        ent = (int )n / 10;
        frac += ((dec - ent) * 10);
        n = ent;
    } while (dec > 0);

    return frac * sig;
}

int main() {
    cout << sumaDigitos(-12345) << endl;
}
