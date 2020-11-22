#include <iostream>

int main() {
  int nr;
  float weight;

  std::cout << "Give weight:\n";
  std::cin >> weight;

  std::cout << "Give planet:\n";
  std::cin >> nr;

  switch (nr) {
    case 1:
    std::cout << "Venus weight is:" << weight * 0.78 << std::endl;
      break;
    default:
      break;
  }

      return 0;
  }
