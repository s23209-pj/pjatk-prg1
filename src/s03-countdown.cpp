#include <iostream>
#include <string>

auto main(int, char *argv[]) -> int {
  auto const liczba = std::stoi(argv[1]);
  for (auto i = liczba; i >= 0; i--) {
    std::cout << i << "\n";
  }
  return 0;
}
