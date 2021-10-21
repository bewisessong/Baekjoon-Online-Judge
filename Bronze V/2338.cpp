// 2338번. 긴자리 계산
// https://www.acmicpc.net/problem/2338

#include <iostream>
#include <string>
#include <stack>

using namespace std;

void copyStack(string &str, stack<int> &stack)
{
  for (int idx = str.size() - 1; idx >= 0; idx--)
    stack.push(str[idx]);
}

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

  copyStack(a, stackA);
  copyStack(b, stackB);

  return 0;
}