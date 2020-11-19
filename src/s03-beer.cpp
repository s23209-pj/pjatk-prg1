#include <iostream>
#include <string>

auto main() -> int {
  for (auto i = 99; i >= 0; i--) {
    if (i != 0) {
      std::cout << i << " bottles of beer on the wall, " << i
                << " bottles of beer. \n"
                << "Take one down, pass it around.\n";
    }
  }
  std::cout << "\n No more bottles of beer on the wall, no more "
               "bottles of beer.\n"
            << "Go to the store and buy some more.\n";

  return 0;
}
