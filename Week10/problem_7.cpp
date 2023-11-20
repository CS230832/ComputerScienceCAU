#include <iostream>

int *findElement(int *, int, int);

int main() {
  int array[] = {5, 1, 4, 8, 9};
  int size = sizeof(array) / sizeof(int);
  std::cout << findElement(array, size, 1) << " " << array;
  std::cout << std::endl;
  return 0;
}

int *findElement(int *array, int size, int value) {
  for (int i = 0; i < size; i++)
    if (array[i] == value)
      return array + i;
  return nullptr;
}
