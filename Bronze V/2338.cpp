// 2338번. 긴자리 계산
// https://www.acmicpc.net/problem/2338

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
  string a, b;
  cin >> a >> b;

  stack<int> stackA, stackB;
  bool aNegative = false;
  bool bNegative = false;

  if (a[0] == '-')
  {
    aNegative = true;
    a.substr(1);
  }

  if (b[0] == '-')
  {
    bNegative = true;
    b.substr(1);
  }

  for (int idx = a.size() - 1; idx >= 0; idx--)
    stackA.push(a[idx]);

  for (int idx = b.size() - 1; idx >= 0; idx--)
    stackB.push(b[idx]);

  return 0;
}