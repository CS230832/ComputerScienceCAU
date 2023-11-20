#include <iostream>

int *duplicateArray(int *, int);

int main() {
  int array[] = {5, 6, 1, -6, 8, 9, 10};
  int size = sizeof(array) / sizeof(int);

  int *darray = duplicateArray(array, size);

  for (int i = 0; i < size; i++)
    std::cout << darray[i] << " ";
  std::cout << std::endl;

  return 0;
}

int *duplicateArray(int *array, int size) {
  int *newArray = new int[size];
  for (int i = 0; i < size; i++)
    newArray[i] = array[i];
  return newArray;
}