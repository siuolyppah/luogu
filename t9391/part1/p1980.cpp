#include <iostream>

int count_for_this_num(int n, short bit) {
  int cnt = 0;
  do {
    short cur_bit = n % 10;
    if (cur_bit == bit) {
      cnt++;
    }

    n = n / 10;
  } while (n > 0);

  return cnt;
}

// PERF:
int main(int argc, char *argv[]) {
  int n;
  short x;
  std::cin >> n >> x;

  int cnt = 0;
  for (int i = 1; i <= n; ++i) {
    cnt += count_for_this_num(i, x);
  }

  std::cout << cnt << '\n';

  return 0;
}
