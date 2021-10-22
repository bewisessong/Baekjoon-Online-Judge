## 2475번. 검증수
## https://www.acmicpc.net/problem/2475

num = map(int, input().split())
answer = 0
for i in num:
  answer += i ** 2
print(answer % 10)