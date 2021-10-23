// 6749번. Next in line
// https://www.acmicpc.net/problem/6749

#include <iostream>
using namespace std;

int main()
{
  int young, mid;
  cin >> young >> mid;

  cout << mid + (mid - young) << endl;

  return 0;
}