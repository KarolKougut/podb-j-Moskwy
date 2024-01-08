#include <iostream>
#include <cstring>

int main() {
  const int max_length = 200;
  char text[max_length];
  std::cout << "Podaj tekst o maksymalnej dlugosci 200 znakow: ";
  std::cin.getline(text, max_length);
  int length = strlen(text);
  for (int i = 0; i < length; i++) {
    if (text[i] == ' ' || text[i] == '.') {
      text[i] = '-';
    }
  }
  std::cout << "Zmodyfikowany wyraz: " << text << std::endl;
  return 0;
}