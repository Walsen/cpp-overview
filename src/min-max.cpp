#include <iostream>
using std::cout; using std::endl;

bool getMinMax(const int * a, size_t len, int * pMin, int * pMax) {
  bool res = true;
  int min = *pMin, max = *pMax;
  size_t i, j = len-1, homogeneous = 0;

  if (len <= 0)
    return false;
  if (len == 1) {
    *pMin = *pMax = a[0];
    return res;
  }

  for (i = 0; i < j; i++) {
    if (a[i] > max) max = a[i];
    if (a[j] > max) max = a[j];
    if (a[i] < min) min = a[i];
    if (a[j] < min) min = a[j];
    if (a[i] == a[j]) homogeneous++;
    j--;
  }

  homogeneous == len ? *pMax = *pMin = a[0] : *pMax = max; *pMin = min;
  
  return res;
}

void showResults(bool res, const int * pMin, const int * pMax) {
  if (res) {
    cout << "Minimum value: " << *pMin << endl;
    cout << "Maximum value: " << *pMax << endl << endl;
  } else {
    cout << "Could not calculate any value." << endl << endl;
  }
}

int main() {
  const size_t maxSize = 100;
  auto min = 0, max = 0, size = 0;

  // Test regular array.
  size = 10;
  int arr[maxSize] = { 2,4,7,1,0,-4,99,101,-3,-11,54 };
  showResults(getMinMax(arr, size, &min, &max), &min, &max);

  // Test empty array.
  min = 0, max = 0, size = 0;
  int arr2[maxSize] = {};
  showResults(getMinMax(arr2, size, &min, &max), &min, &max);

  // Test short array.
  min = 0, max = 0, size = 2;
  int arr3[maxSize] = { -2, 2 };
  showResults(getMinMax(arr3, size, &min, &max), &min, &max);

  // Test array with same values.
  min = 0, max = 0, size = 0;
  int arr4[maxSize] = { 2, 2, 2, 2 };
  showResults(getMinMax(arr4, size, &min, &max), &min, &max);

  // Test minimal array.
  min = 0, max = 0, size = 1;
  int arr5[maxSize] = { -2 };
  showResults(getMinMax(arr5, size, &min, &max), &min, &max);

  return 0;
}
