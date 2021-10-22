// 3003번. 킹, 퀸, 룩, 비숍, 나이트, 폰
// https://www.acmicpc.net/problem/3003

#include <iostream>
using namespace std;

int main()
{
  const int count = 6;
  const int chess[count] = {1, 1, 2, 2, 2, 8};

  int find;
  for (int idx = 0; idx < count; idx++)
  {
    cin >> find;
    cout << chess[idx] - find << " ";
  }
  cout << endl;
  return 0;
}