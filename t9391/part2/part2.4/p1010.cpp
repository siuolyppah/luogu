#include <iostream>
#include <list>

std::list<int> split(int num) {
  std::list<int> ret{};

  int pow = 0;
  while (num > 0) {
    if (num & 1) {
      ret.push_front(pow);
    }

    ++pow;
    num >>= 1;
  }

  return ret;
}

void formatted_print(int num) {
  bool first = true;

  for (auto x : split(num)) {
    if (first) {
      first = false;
    } else {
      std::cout << '+';
    }

    std::cout << 2;
    if (x == 1) {
      // print nothing
    } else {
      std::cout << '(';
      if (x == 0 || x == 2) {
        std::cout << x;
      } else {
        formatted_print(x);
      }
      std::cout << ')';
    }
  }
}

int main(int argc, char *argv[]) {
  int input;
  std::cin >> input;

  formatted_print(input);
  std::cout << '\n';

  return 0;
}
