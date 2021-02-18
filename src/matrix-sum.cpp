#include <iostream>
using std::cout; using std::endl;

const size_t m = 3, n = 3;

/**
  * Write a function that sums two matrices in the first one.
  */
void sum(size_t m1[][n], size_t m2[][n], size_t m, size_t n) {

  for ( size_t i = 0; i < m; i++) {
    for ( size_t j = 0; j < n; j++) {
      m1[i][j] = m1[i][j] + m2[i][j];
    }
  }
}

void printMatrix(size_t mat[][n], size_t m, size_t n) {
  for (size_t i = 0; i < m; i++) {
    for (size_t j = 0; j < n; j++) {
      cout << mat[i][j] << "\t";
    }
    cout << endl;
  }
}

int main() {
  size_t m1[m][n] = {
                      {3,2,5},
                      {2,8,4},
                      {5,9,3}
                    };
  size_t m2[m][n] = {
                      {5,2,8},
                      {3,9,2},
                      {8,3,7}
                    };

  sum(m1, m2, m, n);
  printMatrix(m1, m, n);
  return 0;
}
