#include <ctime>
#include <iostream>
#include <stdlib.h>
#include <string>

auto main() -> int {
  srand(time(NULL));
  std::cout << "You have to guess a number!";
  auto liczba = rand() % 100 + 1;
  auto strzal = std::string{};
  std::cout << "guess: \n";
  std::getline(std::cin, strzal);
  auto strzel = std::stoi(strzal);
  while (liczba != strzel) {
    if (strzel > liczba) {
      std::cout << "too big \n";
    }
    if (strzel < liczba) {
      std::cout << "too small \n";
    }
    if (strzel == liczba) {
      std::cout << "PERFECT \n";
    }
    std::getline(std::cin, strzal);
    strzel = std::stoi(strzal);
  }

  return 0;
}
