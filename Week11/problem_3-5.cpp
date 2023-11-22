#include <iostream>

class String {
 private:
  char *data;
  unsigned int size;

 public:
  String(const char *);
  ~String();

  void display();
  unsigned int length();
  int find_first(char);
  int find_last(char);
  int find_all(char);
  void replace_all(char, char);

  friend std::ostream &operator<<(std::ostream &os, const String &str) {
    os << str.data;
    return os;
  }
};

int main() {
  String msg("Hello, World!\n");

  msg.display();

  std::cout << msg.find_first('l') << std::endl;
  std::cout << msg.find_last('l') << std::endl;
  std::cout << msg.find_all('l') << std::endl;

  msg.replace_all('l', 'm');

  std::cout << msg;

  return 0;
}

String::String(const char *str) {
  int length = 0;
  while (str[length++] != '\0')
    ;
  size = length;
  data = new char[size];

  for (unsigned int i = 0; i < size; i++)
    data[i] = str[i];
}

String::~String() {
  delete[] data;
}

void String::display() {
  for (unsigned int i = 0; i < size; i++)
    std::cout << data[i];
}

unsigned int String::length() {
  return size;
}

int String::find_first(char c) {
  for (unsigned int i = 0; i < size; i++)
    if (data[i] == c)
      return i;
  return -1;
}

int String::find_last(char c) {
  int index = -1;
  for (unsigned int i = 0; i < size; i++)
    if (data[i] == c)
      index = i;
  return index;
}

int String::find_all(char c) {
  int occurrences = 0;
  for (unsigned int i = 0; i < size; i++)
    if (data[i] == c)
      occurrences++;

  return occurrences;
}

void String::replace_all(char find, char replace) {
  for (unsigned int i = 0; i < size; i++)
    if (data[i] == find)
      data[i] = replace;
}
