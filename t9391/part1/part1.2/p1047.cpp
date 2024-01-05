#include <iostream>
#include <ostream>
#include <vector>

int main() {
  int l, m;
  std::cin >> l >> m;

  std::vector<bool> planted(l + 1, true);

  int u, v;
  for (int i = 0; i < m; ++i) {
    std::cin >> u >> v;

    for (int j = u; j <= v; ++j) {
      planted[j] = false;
    }
  }

  int sum{};
  for (int i = 0; i <= l; ++i) {
    if (planted[i]) {
      ++sum;
    }
  }

  std::cout << sum << std::endl;
}
