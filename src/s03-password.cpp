#include <iostream>
#include <string>

auto main(int, char *argv[]) -> int {
  auto const haslo = std::string{argv[1]};
  auto phaslo = std::string{};
  std::cout << "Password: ";
  std::getline(std::cin, phaslo);

  while (phaslo != haslo) {
    std::cout << "Wrong password! Try again. \n Password: ";
    std::getline(std::cin, phaslo);
  }
  if (haslo == phaslo) {
    std::cout << "ok! !\n";
  }
  return 0;
}
