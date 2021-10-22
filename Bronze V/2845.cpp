// 2845번. 파티가 끝나고 난 뒤
// https://www.acmicpc.net/problem/2845

#include <iostream>

using namespace std;

#define NEWS 5

int main()
{
  int l, p;
  cin >> l >> p;

  int parti;
  for (int idx = 0; idx < NEWS; idx++)
  {
    cin >> parti;
    cout << parti - l * p << " ";
  }
  cout << endl;

  return 0;
}