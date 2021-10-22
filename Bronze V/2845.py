## 2845번. 파티가 끝나고 난 뒤
## https://www.acmicpc.net/problem/2845

l, p = map(int, input().split())
article = map(int, input().split())

for a in article:
  print(a - l*p, end=' ')