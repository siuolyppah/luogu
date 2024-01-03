#include <iostream>

short how_unhappy(short x) { return std::max(x - 8, 0); }

int main(int argc, char *argv[]) {

  short a, b;

  short the_most_unhappy_day = 0;
  short the_most_unhappy_val = 0;

  for (int i = 1; i <= 7; ++i) {
    std::cin >> a >> b;

    short t = how_unhappy(a + b);
    if (t > the_most_unhappy_val) {
      the_most_unhappy_day = i;
      the_most_unhappy_val = t;
    }
  }

  std::cout << the_most_unhappy_day << '\n';

  return 0;
}