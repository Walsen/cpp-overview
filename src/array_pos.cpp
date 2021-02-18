#include <iostream>
using namespace std;

/**
 * Hacer una función que dado un array de enteros, busque el elemento en el array y devuelva su ubicación (-1 si no lo encuentra)
 *      int datos[] = { 10, 15, 30, 20, 12, 4, 8, 6, 24 };
 *      int pos = buscar(20, datos, 9); // 9 es el tamaño del array
 */
int buscar(int n, const int d[], int s) {
    int pos = -1;

    for (int i = 0; i < s; ++i) {
        for (int j = s; j > i; --j) {
            if (d[i] == n) {
                pos = i;
                break;
            } else if (d[j] == n) {
                pos = j;
                break;
            }
        }
    }

    return pos;
}

int main() {
    int datos[] = { 10, 15, 30, 20, 12, 4, 8, 6, 24 };
    int num = 50;
    int pos = buscar(num, datos, 9);
    (pos == -1) ? cout << "El número " << num << " no existe en el array." << endl
                : cout << "Encontrado en la posición :" << pos+1 << endl;

    return 0;
}
