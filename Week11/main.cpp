#include <iostream>

class String {
 private:
  char *data;
  unsigned int size;

 public:
  String(const char *str) {
    int length = 0;
    while (str[length++] != '\0');
    size = length;
    data = new char[size];

    for (unsigned int i = 0; i < size; i++)
      data[i] = str[i];
  }

  ~String() {
    delete[] data;
  }

  void display() {
    for (unsigned int i = 0; i < size; i++)
      std::cout << data[i];
  }

  unsigned int length() {
    return size;
  }

  int find_first(char c) {
    for (unsigned int i = 0; i < size; i++)
      if (data[i] == c)
        return i;
    return -1;
  }

  int find_last(char c) {
    int index = -1;
    for (unsigned int i = 0; i < size; i++)
      if (data[i] == c)
        index = i;
    return index;
  }

  int find_all(char c) {
    int occurrences = 0;
    for (unsigned int i = 0; i < size; i++)
      if (data[i] == c)
        occurrences++;

    return occurrences;
  }

  void replace_all(char find, char replace) {
    for (unsigned int i = 0; i < size; i++)
      if (data[i] == find)
        data[i] = replace;
  }
};

int main() {
  String msg("Hello, World!\n");

  msg.display();

  std::cout << msg.find_first('l') << std::endl;
  std::cout << msg.find_last('l') << std::endl;
  std::cout << msg.find_all('l') << std::endl;

  msg.replace_all('l', 'm');

  msg.display();

  return 0;
}