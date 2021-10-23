// 5522번. 카드 게임
// https://www.acmicpc.net/problem/5522

#include <iostream>
using namespace std;

int main()
{
  const int game = 5;

  long long score;
  long long answer = 0;
  for (int g = 0; g < game; g++)
  {
    cin >> score;
    answer += score;
  }

  cout << answer;

  return 0;
}