#include <iostream>
using namespace std;

/**
 * Hacer una función que imprima recursivamente los N primeros números de la serie de Fibonacci.
    ej: fib(10) que imprima 1 1 2 3 5 8 13 21 34 55

 * Fibonacci series: 0 1 1 2 3 5 8 13 21...
 * F(N) = F(N-1) + F(N-2)
 * F(0) = 0
 * F(1) = 1
 * F(2) = 1
*/
int fib(int n) {
    if (n <= 1) return n;

    return fib(n - 2) + fib(n - 1);
}

int main() {
    int n = 10;
    for (int i = 1; i < n+1; i++) {
        cout << fib(i) << " ";
    }
}
