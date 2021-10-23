## 5554번. 심부름 가는 길
## https://www.acmicpc.net/problem/5554

time = 0;
for i in range(4):
  move = int(input())
  time += move
print(time // 60)
print(time % 60)
