#include <iostream>
#include <string>

auto main(int, char *argv[]) -> int {
  auto const n = std::stoi(argv[1]);
  // std::cout << n << "\n";
  if (n % 3 == 0 || n % 5 == 0 || n % 15 == 0) {
    if (n % 3 == 0 && n % 15 != 0)
      std::cout << n << " Fizz\n";
    if (n % 5 == 0 && n % 15 != 0)
      std::cout << n << " Buzz\n";
    if (n % 15 == 0)
      std::cout << n << " FizzBuzz\n";
  }
  return 0;
}
