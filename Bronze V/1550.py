## 1550번. 16진수
## https://www.acmicpc.net/problem/1550

num = input()
answer = 0
mul = (16 ** (len(num)))
for i in num:
  mul /= 16
  if "A" <= i <= "F":
    answer += (ord(i) - 55) * mul
  else:
    answer += int(i) * mul
print(int(answer))