// 1550번. 16진수
// https://www.acmicpc.net/problem/1550

#include <iostream>
#include <string>

using namespace std;

#define HEX 16

int main()
{
  string hex;
  cin >> hex;

  long long multi = 1;
  long long answer = 0;

  for (int idx = hex.size() - 1; idx >= 0; idx--)
  {
    switch (hex[idx])
    {
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
      answer += ((hex[idx] - 'A') + 10) * multi;
      break;
    default:
      answer += (hex[idx] - '0') * multi;
      break;
    }

    multi *= HEX;
  }

  cout << answer << endl;
  return 0;
}