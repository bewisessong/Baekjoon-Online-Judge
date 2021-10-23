// 5554번. 심부름 가는 길
// https://www.acmicpc.net/problem/5554

#include <iostream>
using namespace std;

int main()
{
  const int route = 4;

  int move;
  int time = 0;
  for (int r = 0; r < route; r++)
  {
    cin >> move;
    time += move;
  }

  cout << time / 60 << endl;
  cout << time % 60 << endl;

  return 0;
}