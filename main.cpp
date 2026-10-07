#include <iostream>


int f(int);
int main() {
  constexpr int i = 7;
  const int* pointer = &i;
  std::cout << pointer;
  return 0;
}
