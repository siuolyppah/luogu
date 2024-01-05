#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {

  std::vector<int> v{};

  int t;
  std::cin >> t;

  while (t != 0) {
    v.push_back(t);
    std::cin >> t;
  };

  while (v.size() > 1) {
    std::cout << v.back() << ' ';
    v.pop_back();
  }

  if (v.size() == 1) {
    std::cout << v.back();
  } else {
    std::cout << "";
  }

  std::cout << '\n';

  return 0;
}
