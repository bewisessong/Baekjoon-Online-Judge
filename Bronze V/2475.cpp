// 2475번. 검증수
// https://www.acmicpc.net/problem/2475

#include <iostream>

using namespace std;

#define MAX 5
#define VERI 10

int main()
{
  int uniq[MAX];

  int answer = 0;
  for (int idx = 0; idx < MAX; idx++)
  {
    cin >> uniq[idx];
    answer += (uniq[idx] * uniq[idx]);
  }

  cout << answer % VERI << endl;

  return 0;
}