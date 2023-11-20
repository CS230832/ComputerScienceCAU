#include <iostream>

int *findMiddle(int *, int);

int main() {
  int array[] = {5, 6, 1, -6, 8, 9, 10};
  int size = sizeof(array) / sizeof(int);
  std::cout << *findMiddle(array, size) << std::endl;
  return 0;
}

int *findMiddle(int *array, int size) { return array + size / 2; }