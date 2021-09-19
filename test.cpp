#include <iostream>

int mymax(int a, int b) {
  return (a > b) ? a : b;
}

int mymin(int a, int b) {
  return (a < b) ? a : b;
}

int main() {
  int n = 2;
  for (auto i = 0; i < n; i++) {
    std::cout << i << std::endl;
  }
  std::cout << mymax(3, 5) << std::endl;
  return 0;
}
