#include <ctime>
#include <iostream>
#include <random>
#include <stdlib.h>
#include <string>

auto main() -> int {
  //    srand(time(NULL));
  //  std::cout << "You have to guess a number!";
  // auto liczba = rand() % 100 + 1;
  std::random_device rd;
  std::uniform_int_distribution<int> d100(1, 100);
  auto const liczba = d100(rd);
  auto strzal = std::string{};
  std::cout << "guess: ";
  std::getline(std::cin, strzal);
  auto strzel = std::stoi(strzal);
  do {
    if (strzel > liczba) {
      std::cout << "number too big \n";
    }
    if (strzel < liczba) {
      std::cout << "number too small \n";
    }
    if (strzel == liczba) {
      std::cout << "PERFECT \n";
    }
    std::cout << "guess: ";
    std::getline(std::cin, strzal);
    strzel = std::stoi(strzal);
  } while (liczba != strzel);

  return 0;
}
