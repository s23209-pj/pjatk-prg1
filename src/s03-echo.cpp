#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int {
  std::cout << "Lista argumentów: \n";
  if (argc == 0) {
    std::cout << "Brak argumentów do wyświetlenia";
  }
  auto i = 0;
  while (i <= argc) {
    std::cout << argv[i] << "\n";
    i++;
  }
  return 0;
}
