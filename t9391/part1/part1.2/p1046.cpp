#include <iostream>

int main() {
  constexpr int BENCH_HEIGHT = 30;
  constexpr int APPLES_CNT = 10;

  int heights[APPLES_CNT];
  for (int i = 0; i < APPLES_CNT; ++i) {
    std::cin >> heights[i];
  }

  int h;
  std::cin >> h;

  int sum{};
  for (int i = 0; i < APPLES_CNT; ++i) {
    if (heights[i] <= h + BENCH_HEIGHT) {
      ++sum;
    }
  }

  std::cout << sum << '\n';
}
