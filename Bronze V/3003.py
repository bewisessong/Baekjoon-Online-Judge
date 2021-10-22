## 3003번. 킹, 퀸, 룩, 비숍, 나이트, 폰
## https://www.acmicpc.net/problem/3003

chess = [1, 1, 2, 2, 2, 8]
donghyuk = list(map(int, input().split()))

for i in range(len(donghyuk)):
    print(chess[i] - donghyuk[i], end=' ')