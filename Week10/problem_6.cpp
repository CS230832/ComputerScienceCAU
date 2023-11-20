#include <iostream>

char *reverseString(const char *);

int main() {
  std::cout << reverseString("HelloH");
  std::cout << std::endl;
  return 0;
}

char *reverseString(const char *str) {
  int size = 0;
  while (str[size++] != '\0') {
  }
  char *reversed = new char[size];

  for (int i = 0; i <= size / 2; i++) {
    reversed[i] = str[size - i - 2];
    reversed[size - i - 2] = str[i];
  }

  return reversed;
}
