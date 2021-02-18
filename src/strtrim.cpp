#include <iostream>
#include <cstring>
using std::cout; using std::endl;

void trimStr(char * str) {

  size_t len = strlen(str), j = len-1, i = 0;
  size_t lSpaces = 0, rSpaces = 0, totalSpaces, cadLen;

  // Count spaces to the left.
  while(str[i] == ' ') {
    lSpaces++; i++;
  }

  // Count spaces to the right.
  while(str[j] == ' ') {
    rSpaces++; j--;
  }

  totalSpaces = lSpaces + rSpaces;
  cadLen = len - totalSpaces;

  // Move chars "lSpaces" places to the left
  i = 0; j = lSpaces;
  while (i < cadLen) {
    str[i] = str[j];
    i++; j++;
  }

  // Move null termination next to the last char
  if (rSpaces > 0) str[cadLen] = '\0';

}

int main() {

    // Several spaces
    char str[100] = "   Pedro Perez     ";
    trimStr(str);
    cout << str << "|" << endl;

    // Only one space
    char str1[100] = " Pedro Perez ";
    trimStr(str1);
    cout << str1 << "|" << endl;

    // No spaces
    char str2[100] = "Pedro Perez";
    trimStr(str2);
    cout << str2 << "|" << endl;

    return 0;
}
