// 2914번. 저작권
// https://www.acmicpc.net/problem/2914

#include <iostream>

int main()
{
  int a, i;
  std::cin >> a >> i;
  std::cout << (a * (i - 1)) + 1 << std::endl;
  return 0;
}