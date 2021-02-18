#include <iostream>
#include <cstring>
using namespace std;

/**
 * Write a function that inverts chars in a string.
 **/
void reverse(char* cad) {
    size_t len = strlen(cad);
    size_t s = len-1;
    char aux;

    for (size_t i = 0; i < s; i++) {
        aux = cad[i];
        cad[i] = cad[s];
        cad[s] = aux;
        s--;
    }

    cout << cad;
}

int main() {
    char str[100] = "A cat is in the string";
    reverse(str);
    return 0;
}
