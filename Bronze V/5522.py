## 5522번. 카드 게임
## https://www.acmicpc.net/problem/5522

answer = 0
for i in range(5):
  score = int(input())
  answer += score
print(answer)