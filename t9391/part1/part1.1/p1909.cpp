#include <algorithm>
#include <array>
#include <iostream>

struct PencilPackage {
  int count;
  int total_price;
};

int calc_price(PencilPackage p, int demand) {
  int package_cnt = (demand + p.count - 1) / p.count;
  return package_cnt * p.total_price;
}

int main() {
  int demand;
  std::cin >> demand;

  constexpr int packs_num = 3;
  std::array<PencilPackage, packs_num> packages;
  for (auto &p : packages) {
    std::cin >> p.count >> p.total_price;
  }

  int min = calc_price(packages[0], demand);
  for (int i = 1; i < packs_num; ++i) {
    min = std::min(min, calc_price(packages[i], demand));
  }

  std::cout << min << '\n';
}
