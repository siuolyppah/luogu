#include <iostream>

// line 1: 一个数字，sum=2
// line 2: 两个数字, sum=3
// line x: x个数字,  sum=x+1
//
// return:
// 第n个数字在哪个line
//
// PERF:
void which_line(int n, int &out_line, int &out_k) {

  int num_cnt = 0;
  for (int cur_line_no = 1;; ++cur_line_no) {
    num_cnt += cur_line_no;

    if (num_cnt >= n) {
      out_line = cur_line_no;
      out_k = n - (num_cnt - cur_line_no) - 1;
      return;
    }
  }
}

int main(int argc, char *argv[]) {

  // 沿着对角线走，每一个斜行的sum
  // sums:
  // 2 3 4
  // 3 4
  // 4  ...

  int n;
  std::cin >> n;

  int line, k;
  which_line(n, line, k);
  if (line % 2 == 0) {
    // 右上角，走到左下角
    int f_n = 1, f_d = line;
    std::cout << (f_n + k) << '/' << (f_d - k) << '\n';
  } else {
    int f_n = line, f_d = 1;
    std::cout << (f_n - k) << '/' << (f_d + k) << '\n';
  }

  return 0;
}
