#include <iostream>

int *mergeSorted(int *, int, int *, int);

int main() {
  int array1[] = {1, 2, 10};
  int size1 = sizeof(array1) / sizeof(int);
  int array2[] = {6};
  int size2 = sizeof(array2) / sizeof(int);

  int *merged = mergeSorted(array1, size1, array2, size2);
  for (int i = 0; i < size1 + size2; i++)
    std::cout << merged[i] << " ";
  std::cout << std::endl;
  return 0;
}

int *mergeSorted(int *array1, int size1, int *array2, int size2) {
  int *merged = new int[size1 + size2];
  int handle1 = 0;
  int handle2 = 0;
  int i = 0;

  while (handle1 < size1 && handle2 < size2)
    if (array1[handle1] < array2[handle2])
      merged[i++] = array1[handle1++];
    else
      merged[i++] = array2[handle2++];

  if (handle2 == size2)
    while (handle1 < size1)
      merged[i++] = array1[handle1++];
  else
    while (handle2 < size2)
      merged[i++] = array2[handle2++];

  return merged;
}