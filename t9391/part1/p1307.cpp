#include <iostream>

int main() {
  int input;
  std::cin >> input;

  if(input == 0){
    std::cout << 0 <<std::endl;
    return 0 ;
  }

  if (input < 0) {
    std::cout << '-';
  }
  input = input > 0 ? input : -input;

  int t = input % 10;
  while (t == 0) {
    input /= 10;
    t = input %10;
  }

  do {
    t = input % 10;
    input /= 10;
    std::cout << static_cast<char>('0' + t);

  } while (input != 0);

  std::cout << '\n';
}