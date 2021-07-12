#include <bitset>
#include <iostream>

int main() {
  unsigned long long a = -58, b = a >> 1, c = -1;

  std::cout << "a = " << std::bitset<8>(a) << std::endl;
  std::cout << "b = " << std::bitset<8>(b) << std::endl;
  std::cout << "c = " << std::bitset<1024>(c) << std::endl;
}