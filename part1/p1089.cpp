#include <array>
#include <iostream>

int main(int argc, char *argv[]) {
  constexpr int M = 12;
  constexpr int income = 300;

  // used in 2 ways:
  // input: cost every month
  // balance every month
  std::array<int, M + 1> month_balance {};

  for (int i = 1; i <= M; ++i) {
    std::cin >> month_balance[i];
  }

  int saving = 0;
  for (int i = 1; i <= M; ++i) {
    int cur_balance = month_balance[i - 1] + income - month_balance[i];
    if (cur_balance < 0) {
      std::cout << -i << '\n';
      return 0;
    }

    int cur_save = (cur_balance / 100) * 100;
    saving += cur_save;
    month_balance[i] = cur_balance - cur_save;
  }

  std::cout << static_cast<int>(saving * 1.2) + month_balance[M] << '\n';

  return 0;
}