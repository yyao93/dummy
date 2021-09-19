#include <iostream>

int my_max_min(bool isMax, int a, int b) {
  if (isMax)
    return (a > b) ? a : b;
  else
    return (a < b) ? a : b;
}

int main() {
  int n = 2;
  for (auto i = 0; i < n; i++) {
    std::cout << i;
  }
  std::cout << my_max_min(true, 3, 5) << my_max_min(false, 3, 5) << std::endl;
  return 0;
}
