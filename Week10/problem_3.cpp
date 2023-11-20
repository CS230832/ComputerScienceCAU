#include <iostream>

int countChar(char *, char);

int main() {
  char name[] = "Muhammadxon";
  std::cout << countChar(name, 'm') << std::endl;
  return 0;
}

int countChar(char *str, char c) {
  int count = 0;

  while (*str != '\0') {
    if (*str == c)
      count++;
    str++;
  }

  return count;
}
