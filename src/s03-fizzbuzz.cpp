#include <iostream>
#include <string>

auto main(int, char *argv[]) -> int {
  auto const n = std::stoi(argv[1]);
  std::cout << n << "\n";
  if (n % 3 == 0 || n % 5 == 0 || n % 15 == 0) {
    if (n % 3 == 0 && n % 15 != 0)
      std::cout << "Fizz\n";
    if (n % 5 == 0 && n % 15 != 0)
      std::cout << "Buzz\n";
    if (n % 15 == 0)
      std::cout << "FizzBuzz\n";
  } else {
    std::cout << "Nie podzielna przez 3, 5 i 15\n";
  }
  return 0;
}
