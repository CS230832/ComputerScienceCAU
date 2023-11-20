#include <iostream>

void allocateAndInitialize(int **, int, int);

int main() {
  int size = 2;
  int **hello = new int *[size];

  allocateAndInitialize(hello, size, -9);

  for (int i = 0; i < size; i++)
    std::cout << hello[0][i] << " ";

  std::cout << std::endl;
  return 0;
}

void allocateAndInitialize(int **array, int size, int value) {
  int *newArray = new int[size];

  for (int i = 0; i < size; i++)
    newArray[i] = value;

  *array = newArray;
}